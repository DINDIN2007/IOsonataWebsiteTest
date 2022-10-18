/**-------------------------------------------------------------------------
@example	BleAdvertiser.cpp

@brief	BLE non-connectable advertiser

This demo show how to advertise an incremental counter in the manufacturer
specific data.  The counter increments every second.

@author	Hoang Nguyen Hoan
@date	Dec. 19, 2017

@license

MIT License

Copyright (c) 2017, I-SYST inc., all rights reserved

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
#include <string.h>


#include "istddef.h"
#include "coredev/timer.h"

#include "bluetooth/ble_app.h"
#ifndef NRFXLIB_SDC
#include "ble_app_nrf5.h"
#endif
#include "bluetooth/ble_appearance.h"
#include "iopinctrl.h"
#include "coredev/system_core_clock.h"

// Uncomment this to set custom board oscillator
//#define MCUOSC	{{OSC_TYPE_XTAL, 32000000, 20}, {OSC_TYPE_RC, }, false}

#ifdef MCUOSC
McuOsc_t g_McuOsc = MCUOSC;
#endif

#ifdef EXTADV
#define DEVICE_NAME                     "Advertising extra long long name"
#else
#define DEVICE_NAME                     "Advertising"// extra xzabcd1234567890"
#endif

#define APP_ADV_INTERVAL_MSEC       50//MSEC_TO_UNITS(100, UNIT_0_625_MS)
#define APP_ADV_TIMEOUT_MSEC      	0//1000//MSEC_TO_UNITS(1000, UNIT_10_MS)

uint32_t g_AdvCnt = 0;
uint8_t g_AdvLong[] = "1234567890abcdefghijklmnopqrstuvwxyz`!@#$%^&*()_+";

const BleAppCfg_t s_BleAppCfg = {
	.Role = BLEAPP_ROLE_BROADCASTER,
	.CentLinkCount = 0,		// Number of central link
	.PeriLinkCount = 1,		// Number of peripheral link
	.pDevName = (char*)DEVICE_NAME,			// Device name
	.VendorID = ISYST_BLUETOOTH_ID,		// PnP Bluetooth/USB vendor id
	.ProductId = 1,                      // PnP Product ID
	.ProductVer = 0,						// Pnp prod version
	.Appearance = BLE_APPEAR_COMPUTER_WEARABLE,					// Enable device information service (DIS)
	.pDevDesc = NULL,					// Pointer device info descriptor
#ifdef EXTADV
	.bExtAdv = true,
	.pAdvManData  = (uint8_t*)&g_AdvLong,   	// Manufacture specific data to advertise
	.AdvManDataLen = sizeof(g_AdvLong),      	// Length of manufacture specific data
#else
	.bExtAdv = false,
	.pAdvManData  = (uint8_t*)&g_AdvCnt,   	// Manufacture specific data to advertise
	.AdvManDataLen = sizeof(g_AdvCnt),      	// Length of manufacture specific data
#endif
	.pSrManData = NULL,
	.SrManDataLen = 0,
	.SecType = BLEAPP_SECTYPE_NONE,    // Secure connection type
	.SecExchg = BLEAPP_SECEXCHG_NONE,   // Security key exchange
	.AdvInterval = APP_ADV_INTERVAL_MSEC,       	// Advertising interval in msec
	.AdvTimeout = APP_ADV_TIMEOUT_MSEC,	// Advertising timeout in sec
	.AdvSlowInterval = 0,							// Slow advertising interval, if > 0, fallback to
								// slow interval on adv timeout and advertise until connected
	.ConnIntervalMin = 0,		// Min. connection interval
	.ConnIntervalMax = 0,		// Max. connection interval
	.ConnLedPort = -1,		// Led port nuber
	.ConnLedPin = -1,		// Led pin number
	.ConnLedActLevel = 0,
	.TxPower = 0,		// Tx power
	.SDEvtHandler = NULL,	// RTOS Softdevice handler
	.MaxMtu = 0,						//!< Max MTU size or 0 for default

};

static const TimerCfg_t s_TimerCfg = {
	.DevNo = 2,
	.ClkSrc = TIMER_CLKSRC_DEFAULT,
	.Freq = 0,
	.IntPrio = 6,
};

#if 1
Timer g_Timer;

void TimerTrigEvtHandler(TimerDev_t * const pTimer, int TrigNo, void * const pContext)
{
	g_AdvCnt++;

	BleAppAdvManDataSet((uint8_t*)&g_AdvCnt, sizeof(g_AdvCnt), NULL, 0);
}

void BleAppInitUserData()
{
	g_Timer.Init(s_TimerCfg);

	g_Timer.EnableTimerTrigger(0, 1000UL, TIMER_TRIG_TYPE_CONTINUOUS, TimerTrigEvtHandler);
}

#else
void BleAppAdvTimeoutHandler()
{
	g_AdvCnt++;

	BleAppAdvManDataSet((uint8_t*)&g_AdvCnt, sizeof(g_AdvCnt), NULL, 0);
	BleAppAdvStart();
}
#endif

int main()
{
    BleAppInit((const BleAppCfg_t *)&s_BleAppCfg);//, true);

    BleAppRun();

	return 0;
}

