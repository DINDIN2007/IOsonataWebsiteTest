/**-------------------------------------------------------------------------
@file	ble_app_sdc.cpp

@brief	Nordic SDK based BLE application creation helper using softdevice controller


@author	Hoang Nguyen Hoan
@date	Mar. 8, 2022

@license

MIT License

Copyright (c) 2022, I-SYST inc., all rights reserved

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

----------------------------------------------------------------------------*/
#include <stdio.h>
#include <inttypes.h>
#include <atomic>
#include <stdlib.h>

#include "mpsl.h"
#include "mpsl_coex.h"
#include "sdc.h"
#include "sdc_soc.h"
#include "sdc_hci_cmd_le.h"
#include "sdc_hci.h"
#include "sdc_hci_vs.h"
#include "sdc_hci_cmd_controller_baseband.h"

#include "istddef.h"
#include "convutil.h"
#include "coredev/uart.h"
#include "custom_board.h"
#include "coredev/iopincfg.h"
#include "coredev/system_core_clock.h"
#include "coredev/timer.h"
#include "bluetooth/bt_app.h"
#include "bluetooth/bt_dev.h"
#include "bluetooth/bt_hci.h"
#include "bluetooth/bt_hcievt.h"
#include "bluetooth/bt_l2cap.h"
#include "bluetooth/bt_att.h"
#include "bluetooth/bt_gatt.h"
#include "bluetooth/ble_appearance.h"
#include "iopinctrl.h"
#include "app_evt_handler.h"

//BleConn_t g_BleConn = {0,};
extern UART g_Uart;

void TimerHandler(TimerDev_t * const pTimer, uint32_t Evt);

#pragma pack(push, 4)

typedef struct __Bt_App_Data {
	BTDEV_ROLE Role;
	uint16_t ConnHdl;	// BLE connection handle
	int ConnLedPort;
	int ConnLedPin;
	uint8_t ConnLedActLevel;
	int PeriphDevCnt;
	uint32_t (*SDEvtHandler)(void) ;
	int MaxMtu;
	bool bSecure;
	bool bScan;
    bool bInitialized;
	BTDEV_COEXMODE CoexMode;
} BtAppData_t;

#pragma pack(pop)

static BtAppData_t s_BtAppData = {
	BTDEV_ROLE_PERIPHERAL, 0xFFFF, -1, -1, 0,
};

//BtDev_t g_BtDevSdc;

/**@brief Bluetooth SIG debug mode Private Key */
__ALIGN(4) __WEAK extern const uint8_t g_lesc_private_key[32] = {
    0xbd,0x1a,0x3c,0xcd,0xa6,0xb8,0x99,0x58,0x99,0xb7,0x40,0xeb,0x7b,0x60,0xff,0x4a,
    0x50,0x3f,0x10,0xd2,0xe3,0xb3,0xc9,0x74,0x38,0x5f,0xc5,0xa3,0xd4,0xf6,0x49,0x3f,
};

alignas(4) static uint8_t s_BtStackSdcMemPool[10000];
#if 0
static BtHciDevCfg_t s_BtHciDevCfg = {
	.SendData = HciSdcSendData,
	.EvtHandler = BleAppEvtHandler,
	.ConnectedHandler = BleAppConnected,
	.DisconnectedHandler = BleAppDisconnected,
	.SendCompletedHandler = BleAppSendCompleted,
};

alignas(4) static BtHciDevice_t s_HciDevice = {
		251, 251,
		.SendData = HciSdcSendData,
		.EvtHandler = BleAppEvtHandler,
		.Connected = BleAppConnected,
		.Disconnected = BleAppDisconnected,
};
#endif

const static TimerCfg_t s_TimerCfg = {
    .DevNo = 1,
	.ClkSrc = TIMER_CLKSRC_DEFAULT,
	.Freq = 0,			// 0 => Default frequency
	.IntPrio = 6,
	.EvtHandler = TimerHandler
};

Timer g_BleAppTimer;

__WEAK void BtAppInitUserData()
{

}

static void BtStackMpslAssert(const char * const file, const uint32_t line)
{
//	printf("MPSL Fault: %s, %d\n", file, line);
	while(1);
}

static void BtStackSdcAssert(const char * file, const uint32_t line)
{
//	printf("SDC Fault: %s, %d\n", file, line);
	while(1);
}


static void BtStackSdcCB()
{
	//printf("BtHciSdcCB\n");

	uint8_t buf[HCI_MSG_BUFFER_MAX_SIZE];
	int32_t res = 0;
	sdc_hci_msg_type_t mtype;

	res = sdc_hci_get(buf, &mtype);
	if (res == 0)
	{
		switch (mtype)
		{
			case SDC_HCI_MSG_TYPE_EVT:
				// Event available
				BtHciProcessEvent(BtDevGetInstance(), (BtHciEvtPacket_t*)buf);
				break;
			case SDC_HCI_MSG_TYPE_DATA:
				BtHciProcessData(BtDevGetInstance(), (BtHciACLDataPacket_t*)buf);
				break;
		}
	}
}

void TimerHandler(TimerDev_t *pTimer, uint32_t Evt)
{
    if (Evt & TIMER_EVT_TRIGGER(0))
    {

    }
}

void BtAppSetDevName(const char *pName)
{
	BtDevSetDevName(pName);
}
/*
char * const BleAppGetDevName()
{
	//return s_BtGapCharDevName;
}

*/
bool isConnected()
{
	return s_BtAppData.ConnHdl != 0;
}

static void BtAppConnLedOff()
{
	if (s_BtAppData.ConnLedPort < 0 || s_BtAppData.ConnLedPin < 0)
		return;

	if (s_BtAppData.ConnLedActLevel)
	{
	    IOPinClear(s_BtAppData.ConnLedPort, s_BtAppData.ConnLedPin);
	}
	else
	{
	    IOPinSet(s_BtAppData.ConnLedPort, s_BtAppData.ConnLedPin);
	}
}

static void BtAppConnLedOn()
{
	if (s_BtAppData.ConnLedPort < 0 || s_BtAppData.ConnLedPin < 0)
		return;

    if (s_BtAppData.ConnLedActLevel)
    {
        IOPinSet(s_BtAppData.ConnLedPort, s_BtAppData.ConnLedPin);
    }
    else
    {
        IOPinClear(s_BtAppData.ConnLedPort, s_BtAppData.ConnLedPin);
    }
}

void BtAppEvtHandler(BtHciDevice_t * const pDev, uint32_t Evt)
{

}

void BtAppConnected(uint16_t ConnHdl, uint8_t Role, uint8_t PeerAddrType, uint8_t PeerAddr[6])
{
	s_BtAppData.ConnHdl = ConnHdl;

	BtGapAddConnection(ConnHdl, Role, PeerAddrType, PeerAddr);
//	s_BtGapSrvc.ConnHdl = ConnHdl;
//	s_BtGattSrvc.ConnHdl = ConnHdl;

	BleAppUserEvtConnected(ConnHdl);
}

void BtAppDisconnected(uint16_t ConnHdl, uint8_t Reason)
{
//	s_BtGapSrvc.ConnHdl = BT_GATT_HANDLE_INVALID;
//	s_BtGattSrvc.ConnHdl = BT_GATT_HANDLE_INVALID;

	BtGapDeleteConnection(ConnHdl);

	if (isBtGapConnected() == false)
	{
//		BtGattSrvcDisconnected(&s_BtGapSrvc);
//		BtGattSrvcDisconnected(&s_BtGattSrvc);

		BleAppUserEvtDisconnected(ConnHdl);
	}

	s_BtAppData.ConnHdl = BtGapGetConnection();

}

void BtAppSendCompleted(uint16_t ConnHdl, uint16_t NbPktSent)
{

}

void BleAppEnterDfu()
{
}

void BleAppDisconnect()
{
}
/*
void BleAppGapDeviceNameSet(const char* pDeviceName)
{
	BleAdvPacket_t *advpkt;

	if (g_BleAppData.bExtAdv == true)
	{
		advpkt = &s_BleAppExtAdvPkt;
	}
	else
	{
		advpkt = &s_BleAppAdvPkt;
	}

	size_t l = strlen(pDeviceName);
	uint8_t type = BT_GAP_DATA_TYPE_COMPLETE_LOCAL_NAME;

	if (l < 14)
	{
		// Short name
		type = BT_GAP_DATA_TYPE_SHORT_LOCAL_NAME;
	}

	BleAdvDataAdd(advpkt, type, (uint8_t*)pDeviceName, l);

	BtGattCharSetValue(&s_BtGapChar[0], (void*)pDeviceName, l);
}
*/

bool BtAppAdvManDataSet(uint8_t *pAdvData, int AdvLen, uint8_t *pSrData, int SrLen)
{
	return BtDevAdvManDataSet(pAdvData, AdvLen, pSrData, SrLen);

}

void BtAppAdvStart()
{
	BtDevAdvStart();
}

void BleAppAdvStop()
{
	BtDevAdvStop();
}



uint16_t BleAppGetConnHandle()
{
	return s_BtAppData.ConnHdl;
}
#if 0
/**@brief Function for handling events from the GATT library. */
void BleGattEvtHandler(nrf_ble_gatt_t * p_gatt, const nrf_ble_gatt_evt_t * p_evt)
{
    if ((g_BleAppData.ConnHdl == p_evt->conn_handle) && (p_evt->evt_id == NRF_BLE_GATT_EVT_ATT_MTU_UPDATED))
    {
    	//g_BleAppData.MaxMtu = p_evt->params.att_mtu_effective - 3;//OPCODE_LENGTH - HANDLE_LENGTH;
       // m_ble_nus_max_data_len = p_evt->params.att_mtu_effective - OPCODE_LENGTH - HANDLE_LENGTH;
        //NRF_LOG_INFO("Data len is set to 0x%X(%d)\r\n", m_ble_nus_max_data_len, m_ble_nus_max_data_len);
    }
 //   printf("ATT MTU exchange completed. central 0x%x peripheral 0x%x\r\n", p_gatt->att_mtu_desired_central, p_gatt->att_mtu_desired_periph);
}
#endif
/**@brief Function for initializing the GATT library. */
void BleAppGattInit(void)
{
#if 0
    ret_code_t err_code;

    err_code = nrf_ble_gatt_init(&s_Gatt, BleGattEvtHandler);
    APP_ERROR_CHECK(err_code);

    if (g_BleAppData.AppRole & BLEAPP_ROLE_PERIPHERAL)
    {
    	err_code = nrf_ble_gatt_att_mtu_periph_set(&s_Gatt, g_BleAppData.MaxMtu);
    	APP_ERROR_CHECK(err_code);

    	if (g_BleAppData.MaxMtu >= 27)
    	{
    		// 251 bytes is max dat length as per Bluetooth core spec 5, vol 6, part b, section 4.5.10
    		// 27 - 251 bytes is hardcoded in nrf_ble_gat of the SDK.
    		uint8_t dlen = g_BleAppData.MaxMtu > 254 ? 251: g_BleAppData.MaxMtu - 3;
    		err_code = nrf_ble_gatt_data_length_set(&s_Gatt, BLE_CONN_HANDLE_INVALID, dlen);
    		APP_ERROR_CHECK(err_code);
    	}
      	ble_opt_t opt;

      	memset(&opt, 0x00, sizeof(opt));
      	opt.common_opt.conn_evt_ext.enable = 1;

      	err_code = sd_ble_opt_set(BLE_COMMON_OPT_CONN_EVT_EXT, &opt);
      	APP_ERROR_CHECK(err_code);
    }

    if (g_BleAppData.AppRole & BLEAPP_ROLE_CENTRAL)
    {
    	err_code = nrf_ble_gatt_att_mtu_central_set(&s_Gatt, g_BleAppData.MaxMtu);
    	APP_ERROR_CHECK(err_code);
    }
#endif
}

static uint8_t BtStackRandPrioLowGet(uint8_t *pBuff, uint8_t Len)
{
	for (int i = 0; i < Len; i++)
	{
		pBuff[i] = rand();
	}

	return Len;
}

static uint8_t BtStackRandPrioHighGet(uint8_t *pBuff, uint8_t Len)
{
	return BtStackRandPrioLowGet(pBuff, Len);
}

static void BtStackRandPrioLowGetBlocking(uint8_t *pBuff, uint8_t Len)
{
	NRF_RNG->CONFIG = RNG_CONFIG_DERCEN_Enabled;

	NRF_RNG->TASKS_START = 1;

	for (int i = 0; i < Len; i++)
	{
		while (NRF_RNG->EVENTS_VALRDY == 0);

		pBuff[i] = NRF_RNG->VALUE;
	}

	NRF_RNG->TASKS_STOP = 1;

	NRF_RNG->CONFIG = RNG_CONFIG_DERCEN_Disabled;
}

bool BtAppStackInit(const BtDevCfg_t *pCfg)
{
	// Initialize Nordic Softdevice controller
	int32_t res = sdc_init(BtStackSdcAssert);

	sdc_hci_cmd_cb_reset();

	sdc_rand_source_t rand_functions = {
		.rand_prio_low_get = BtStackRandPrioLowGet,
		.rand_prio_high_get = BtStackRandPrioHighGet,
		.rand_poll = BtStackRandPrioLowGetBlocking
	};

	res = sdc_rand_source_register(&rand_functions);

	sdc_support_le_2m_phy();
	sdc_support_le_coded_phy();
	//sdc_support_le_power_control();

	if (pCfg->Role & (BTDEV_ROLE_PERIPHERAL | BTDEV_ROLE_BROADCASTER))
	{
		// Config for peripheral role
		res = sdc_support_adv();
		res = sdc_support_ext_adv();
		sdc_support_le_periodic_adv();
		sdc_support_le_periodic_sync();
		sdc_support_peripheral();
		sdc_support_dle_peripheral();
		sdc_support_phy_update_peripheral();
		sdc_support_le_power_control_peripheral();
		sdc_support_le_conn_cte_rsp_peripheral();

		if (pCfg->CoexMode != BTDEV_COEXMODE_NONE)
		{
			sdc_coex_adv_mode_configure(true);
		}
	}
	if (pCfg->Role & (BTDEV_ROLE_CENTRAL | BTDEV_ROLE_OBSERVER))
	{
		// Config for central role
		sdc_support_scan();
		sdc_support_ext_scan();
		sdc_support_central();
		sdc_support_ext_central();
		sdc_support_dle_central();
		sdc_support_phy_update_central();
		sdc_support_le_power_control_central();
		sdc_support_le_conn_cte_rsp_central();
	}

    uint32_t ram = 0;
	sdc_cfg_t cfg;

	int l = pCfg->MaxMtu == 0 ? BTDEV_DEFAULT_MAX_DATA_LEN : pCfg->MaxMtu;
	cfg.buffer_cfg.rx_packet_size = l;
	cfg.buffer_cfg.tx_packet_size = l;
	cfg.buffer_cfg.rx_packet_count = 4;
	cfg.buffer_cfg.tx_packet_count = 4;

	ram = sdc_cfg_set(SDC_DEFAULT_RESOURCE_CFG_TAG,
				       	  SDC_CFG_TYPE_BUFFER_CFG,
						  &cfg);
	if (ram < 0)
	{
		return false;
	}

	cfg.event_length.event_length_us = 7500;
	ram = sdc_cfg_set(SDC_DEFAULT_RESOURCE_CFG_TAG,
				       	  SDC_CFG_TYPE_EVENT_LENGTH,
						  &cfg);
	if (ram < 0)
	{
		return false;
	}

	if (pCfg->Role & (BTDEV_ROLE_PERIPHERAL | BTDEV_ROLE_BROADCASTER))
	{
		// Config for peripheral role
		cfg.peripheral_count.count = pCfg->PeriLinkCount;

		ram = sdc_cfg_set(SDC_DEFAULT_RESOURCE_CFG_TAG,
					       	  SDC_CFG_TYPE_PERIPHERAL_COUNT,
							  &cfg);
		if (ram < 0)
		{
			return false;
		}

		cfg.adv_count.count = 1;

		ram = sdc_cfg_set(SDC_DEFAULT_RESOURCE_CFG_TAG,
							  SDC_CFG_TYPE_ADV_COUNT,
							  &cfg);
		if (ram < 0)
		{
			return false;
		}

		cfg.adv_buffer_cfg.max_adv_data = 255;

		ram = sdc_cfg_set(SDC_DEFAULT_RESOURCE_CFG_TAG,
							  SDC_CFG_TYPE_ADV_BUFFER_CFG,
							  &cfg);
		if (ram < 0)
		{
			return false;
		}
	}

	if (pCfg->Role & (BTDEV_ROLE_CENTRAL | BTDEV_ROLE_OBSERVER))
	{
		// Config for central role
		cfg.central_count.count = pCfg->CentLinkCount;
		ram = sdc_cfg_set(SDC_DEFAULT_RESOURCE_CFG_TAG,
					       	  SDC_CFG_TYPE_CENTRAL_COUNT,
							  &cfg);
		if (ram < 0)
		{
			return false;
		}


		cfg.scan_buffer_cfg.count = 10;

		ram = sdc_cfg_set(SDC_DEFAULT_RESOURCE_CFG_TAG,
						  SDC_CFG_TYPE_SCAN_BUFFER_CFG,
						  &cfg);
		if (ram < 0)
		{
			return false;
		}
	}

	if (sizeof(s_BtStackSdcMemPool) < ram)
	{
		return false;
	}
    // Enable BLE stack.
	res = sdc_enable(BtStackSdcCB, s_BtStackSdcMemPool);
	if (res != 0)
	{
		return false;
	}

    return true;
}
#if 0
int8_t GetValidTxPower(int TxPwr)
{
	int8_t retval = s_TxPowerdBm[0];

	for (int i = 1; i < s_NbTxPowerdBm; i++)
	{
		if (s_TxPowerdBm[i] > TxPwr)
			break;

		retval = s_TxPowerdBm[i];
	}

	return retval;
}
#endif
/**
 * @brief Function for the SoftDevice initialization.
 *
 * @details This function initializes the SoftDevice and the BLE event interrupt.
 */
bool BtAppInit(const BtDevCfg_t *pCfg)
{
	int32_t res = 0;
	mpsl_clock_lfclk_cfg_t lfclk = {MPSL_CLOCK_LF_SRC_RC, 0,};
	OscDesc_t const *lfosc = GetLowFreqOscDesc();

	// Set default clock based on system oscillator settings
	if (lfosc->Type == OSC_TYPE_RC)
	{
		lfclk.source = MPSL_CLOCK_LF_SRC_RC;
		lfclk.rc_ctiv = MPSL_RECOMMENDED_RC_CTIV;
		lfclk.rc_temp_ctiv = MPSL_RECOMMENDED_RC_TEMP_CTIV;
	}
	else
	{
		lfclk.accuracy_ppm = lfosc->Accuracy;
		lfclk.source = MPSL_CLOCK_LF_SRC_XTAL;
	}

	lfclk.skip_wait_lfclk_started = MPSL_DEFAULT_SKIP_WAIT_LFCLK_STARTED;

	// Initialize Nordic multi-protocol support library (MPSL)
	res = mpsl_init(&lfclk, PendSV_IRQn, BtStackMpslAssert);
	if (res < 0)
	{
		return false;
	}

	NVIC_SetPriority(PendSV_IRQn, MPSL_HIGH_IRQ_PRIORITY + 15);
	NVIC_EnableIRQ(PendSV_IRQn);

	s_BtAppData.CoexMode = pCfg->CoexMode;

	if (pCfg->CoexMode == BTDEV_COEXMODE_1W)
	{
		mpsl_coex_support_1wire_gpiote_if();
	}
	else if (pCfg->CoexMode == BTDEV_COEXMODE_3W)
	{
		mpsl_coex_support_802152_3wire_gpiote_if();
	}

	s_BtAppData.Role = pCfg->Role;
	/*
	g_BleAppData.bExtAdv = pBleAppCfg->bExtAdv;
	g_BleAppData.bScan = false;
	g_BleAppData.bAdvertising = false;
	g_BleAppData.VendorId = pBleAppCfg->VendorID;
	*/
	s_BtAppData.ConnLedPort = pCfg->ConnLedPort;
	s_BtAppData.ConnLedPin = pCfg->ConnLedPin;
	s_BtAppData.ConnLedActLevel = pCfg->ConnLedActLevel;

	if (pCfg->ConnLedPort != -1 && pCfg->ConnLedPin != -1)
    {
		IOPinConfig(pCfg->ConnLedPort, pCfg->ConnLedPin, 0,
					IOPINDIR_OUTPUT, IOPINRES_NONE, IOPINTYPE_NORMAL);

		BtAppConnLedOff();
    }

   // g_BleAppData.Role = pBleAppCfg->Role;

    if (BtAppStackInit(pCfg) == false)
    {
    	return false;
    }

	uint8_t abuf[100];

	memset(abuf, 0, 100);

	sdc_hci_cmd_vs_zephyr_read_static_addresses_return_t *addr = (sdc_hci_cmd_vs_zephyr_read_static_addresses_return_t *)abuf;

	res = sdc_hci_cmd_vs_zephyr_read_static_addresses(addr);
	if (res == 0)
	{
		sdc_hci_cmd_vs_zephyr_write_bd_addr_t bdaddr;

		memcpy(bdaddr.bd_addr, addr->addresses->address, 6);
		sdc_hci_cmd_vs_zephyr_write_bd_addr(&bdaddr);
	}

	sdc_hci_cmd_le_rand_return_t rr;

	res = sdc_hci_cmd_le_rand(&rr);
	if (res == 0)
	{
		sdc_hci_cmd_le_set_random_address_t ranaddr;
		memcpy(ranaddr.random_address, &rr.random_number, 6);
		if (sdc_hci_cmd_le_set_random_address(&ranaddr))
			return false;
	}

	sdc_hci_cmd_le_read_max_data_length_return_t maxlen;

	res = sdc_hci_cmd_le_read_max_data_length(&maxlen);

	sdc_hci_cmd_le_write_suggested_default_data_length_t datalen = {
		(uint16_t)max(maxlen.supported_max_tx_octets, pCfg->MaxMtu),
		maxlen.supported_max_tx_time
	};

	res = sdc_hci_cmd_le_write_suggested_default_data_length(&datalen);

	sdc_hci_cmd_le_read_buffer_size_return_t rbr;

	res = sdc_hci_cmd_le_read_buffer_size(&rbr);

	sdc_default_tx_power_set(pCfg->TxPower);

	sdc_hci_cmd_le_set_event_mask_t evmask = {0, };

	//evmask.params.le_remote_connection_parameter_request_event = 1;

	memset(evmask.raw, 0xff, sizeof(evmask.raw));
	if (sdc_hci_cmd_le_set_event_mask(&evmask))
	{
		return false;
	}

	sdc_hci_cmd_cb_set_event_mask_t cbevmask;

	memset(cbevmask.raw, 0xff, sizeof(cbevmask.raw));
	if (sdc_hci_cmd_cb_set_event_mask(&cbevmask))
	{
		return false;
	}

	sdc_hci_cmd_cb_set_event_mask_page_2_t cbevmask2;
	memset(cbevmask2.raw, 0xff, sizeof(cbevmask2.raw));
	if (sdc_hci_cmd_cb_set_event_mask_page_2(&cbevmask2))
	{
		return false;
	}


	BtAppInitUserData();

	BtDevInit(pCfg);
/*
    BtGapInit(pCfg->Role);

    if (pCfg->Role & (BTDEV_ROLE_BROADCASTER | BTDEV_ROLE_PERIPHERAL))
    {
    	if (pCfg->Role & BTDEV_ROLE_PERIPHERAL)
    	{
//    		BtGattSrvcAdd(&s_BtGattSrvc, &s_BtGattSrvcCfg);
//    		BtGattSrvcAdd(&s_BtGapSrvc, &s_BtGapSrvcCfg);

    		BleAppInitUserServices();
    	}

    	if (BleAppAdvInit(pBleAppCfg) == false)
    	{
    		return false;
    	}

    	size_t count = 0;
    	BtGattListEntry_t *tbl = GetEntryTable(&count);
#if 0
    	for (int i = 0; i < count; i++)
    	{
    		g_Uart.printf("tbl[%d]: Hdl: %d (0x%04x), Uuid: %04x, Data: ", i, tbl[i].Hdl, tbl[i].Hdl, tbl[i].TypeUuid.Uuid);
    		uint8_t *p = (uint8_t*)&tbl[i].Val32;
    		for (int j = 0; j < 20; j++)
    		{
    			g_Uart.printf("0x%02x ", p[j]);
    		}
    		g_Uart.printf("\r\n");
    	}
#endif
    }

	BtGapSetDevName(pBleAppCfg->pDevName);
*/
    //BleAppGapDeviceNameSet(pBleAppCfg->pDevName);

#if (__FPU_USED == 1)
    // Patch for softdevice & FreeRTOS to sleep properly when FPU is in used
    NVIC_SetPriority(FPU_IRQn, 6);
    NVIC_ClearPendingIRQ(FPU_IRQn);
    NVIC_EnableIRQ(FPU_IRQn);
#endif

    if (AppEvtHandlerInit(pCfg->pEvtHandlerQueMem, pCfg->EvtHandlerQueMemSize) == false)
    {
    	return false;
    }

	//BtHciInit(&s_BtDevCfg);

	s_BtAppData.bInitialized = true;


	return true;
}

void BtAppRun()
{
	if (s_BtAppData.bInitialized == false)
	{
		return;
	}

	if (s_BtAppData.Role & (BTDEV_ROLE_PERIPHERAL | BTDEV_ROLE_BROADCASTER))
	{
		BtDevAdvStart();
	}


	while (1)
	{
		__WFE();
		AppEvtHandlerExec();

#if 1
		uint8_t buf[HCI_MSG_BUFFER_MAX_SIZE];
		int32_t res = 0;
		sdc_hci_msg_type_t mtype;
		res = sdc_hci_get(buf, &mtype);
		if (res == 0)
		{
			switch (mtype)
			{
				case SDC_HCI_MSG_TYPE_EVT:
					// Event available
					BtHciProcessEvent(BtDevGetInstance(), (BtHciEvtPacket_t*)buf);
					break;
				case SDC_HCI_MSG_TYPE_DATA:
					BtHciProcessData(BtDevGetInstance(), (BtHciACLDataPacket_t*)buf);
					break;
			}
		}
#endif
	}
}

void BleAppScan()
{
#if 0
	ret_code_t err_code;

	if (g_BleAppData.bScan == true)
	{
		err_code = sd_ble_gap_scan_start(NULL, &g_BleScanReportData);
	}
	else
	{
	    g_BleAppData.bScan = true;

		err_code = sd_ble_gap_scan_start(&s_BleScanParams, &g_BleScanReportData);
	}
	APP_ERROR_CHECK(err_code);
#endif
}

void BtAppScanStop()
{
	if (s_BtAppData.bScan == true)
	{
		//ret_code_t err_code = sd_ble_gap_scan_stop();
		//APP_ERROR_CHECK(err_code);
		s_BtAppData.bScan = false;
	}
}
#if 0
bool BtAppScanInit(BtAppScanCfg_t *pCfg)
{
	return false;
#if 0
	if (pCfg == NULL)
	{
		return false;
	}

	s_BleScanParams.timeout = pCfg->Timeout;
	s_BleScanParams.window = pCfg->Duration;
	s_BleScanParams.interval = pCfg->Interval;

    uint8_t uidtype = BLE_UUID_TYPE_VENDOR_BEGIN;

    ret_code_t err_code = sd_ble_uuid_vs_add(&pCfg->BaseUid, &uidtype);
    APP_ERROR_CHECK(err_code);

    g_BleAppData.bScan = true;

	err_code = sd_ble_gap_scan_start(&s_BleScanParams, &g_BleScanReportData);
	APP_ERROR_CHECK(err_code);

	return err_code == NRF_SUCCESS;
#endif
}
#endif
#if 0
bool BleAppScanInit(ble_uuid128_t * const pBaseUid, ble_uuid_t * const pServUid)
{
    ble_uuid128_t base_uid = *pBaseUid;
    uint8_t uidtype = BLE_UUID_TYPE_VENDOR_BEGIN;

    ret_code_t err_code = sd_ble_uuid_vs_add(&base_uid, &uidtype);
    APP_ERROR_CHECK(err_code);

    //ble_db_discovery_evt_register(pServUid);
    g_BleAppData.bScan = true;

	err_code = sd_ble_gap_scan_start(&s_BleScanParams, &g_BleScanReportData);
	APP_ERROR_CHECK(err_code);

	return err_code == NRF_SUCCESS;
}
#endif

#if 0
bool BleAppConnect(ble_gap_addr_t * const pDevAddr, ble_gap_conn_params_t * const pConnParam)
{
	ret_code_t err_code = sd_ble_gap_connect(pDevAddr, &s_BleScanParams,
                                  	  	  	 pConnParam,
											 BLEAPP_CONN_CFG_TAG);
    APP_ERROR_CHECK(err_code);

    g_BleAppData.bScan = false;

    return err_code == NRF_SUCCESS;
}
#endif

bool BtAppEnableNotify(uint16_t ConnHandle, uint16_t CharHandle)//ble_uuid_t * const pCharUid)
{
//	BtGattCharNotify();

	return false;
#if 0
    uint32_t                 err_code;
    ble_gattc_write_params_t write_params;
    uint8_t                  buf[BLE_CCCD_VALUE_LEN];

    buf[0] = BLE_GATT_HVX_NOTIFICATION;
    buf[1] = 0;

    write_params.write_op = BLE_GATT_OP_WRITE_CMD;//BLE_GATT_OP_WRITE_REQ;
    write_params.flags = BLE_GATT_EXEC_WRITE_FLAG_PREPARED_WRITE,
    write_params.handle   = CharHandle;
    write_params.offset   = 0;
    write_params.len      = sizeof(buf);
    write_params.p_value  = buf;

    err_code = sd_ble_gattc_write(ConnHandle, &write_params);

    return err_code == NRF_SUCCESS;
#endif
}

bool BtAppNotify(BtGattChar_t *pChar, uint8_t *pData, uint16_t DataLen)
{
	return BtDevNotify(pChar, pData, DataLen);
	/*
	if (BtGattCharSetValue(pChar, pData, DataLen) == false)
	{
		return false;
	}

	if (isBtGattCharNotifyEnabled(pChar) == false)
	{
		return false;
	}

	BtHciMotify(&s_HciDevice, g_BleAppData.ConnHdl, pChar->ValHdl, pData, DataLen);
//	BtHciMotify(g_BleAppData.ConnHdl, pChar->ValHdl, pData, DataLen);

	return true;*/
}

bool BleAppWrite(uint16_t ConnHandle, uint16_t CharHandle, uint8_t *pData, uint16_t DataLen)
{
	return false;
#if 0
	if (ConnHandle == BLE_CONN_HANDLE_INVALID || CharHandle == BLE_CONN_HANDLE_INVALID)
	{
		return false;
	}

    ble_gattc_write_params_t const write_params =
    {
        .write_op = BLE_GATT_OP_WRITE_CMD,
        .flags    = BLE_GATT_EXEC_WRITE_FLAG_PREPARED_WRITE,
        .handle   = CharHandle,
        .offset   = 0,
        .len      = DataLen,
        .p_value  = pData
    };

    return sd_ble_gattc_write(ConnHandle, &write_params) == NRF_SUCCESS;
#endif
}

__WEAK void BtAppInitUserServices()
{

}

extern "C" {
void PendSV_Handler(void)
{
	mpsl_low_priority_process();
}

void RADIO_IRQHandler(void)
{
	MPSL_IRQ_RADIO_Handler();
}

void POWER_CLOCK_IRQHandler()
{
	MPSL_IRQ_CLOCK_Handler();
}

void RTC0_IRQHandler(void)
{
	MPSL_IRQ_RTC0_Handler();
}

void TIMER0_IRQHandler(void)
{
	MPSL_IRQ_TIMER0_Handler();
}
}

