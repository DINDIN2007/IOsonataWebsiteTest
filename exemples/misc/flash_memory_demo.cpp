/**-------------------------------------------------------------------------
@example	flash_memory_demo.cpp

@brief	Example code using SPI Flash memory

@author	Hoang Nguyen Hoan
@date	Mars 8, 2019

@license

Copyright (c) 2019, I-SYST, all rights reserved

Permission to use, copy, modify, and distribute this software for any purpose
with or without fee is hereby granted, provided that the above copyright
notice and this permission notice appear in all copies, and none of the
names : I-SYST or its contributors may be used to endorse or
promote products derived from this software without specific prior written
permission.

For info or contributing contact : hnhoan at i-syst dot com

THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------*/
#include <stdio.h>

#include "coredev/uart.h"
#include "coredev/spi.h"
#include "flash.h"
#include "stddev.h"
#include "idelay.h"

#include "board.h"

#define FIFOSIZE			CFIFO_MEMSIZE(256)

uint8_t g_UarTxBuff[FIFOSIZE];

// Assign UART pins
static IOPinCfg_t s_UartPins[] = {
	{UART_RX_PORT, UART_RX_PIN, UART_RX_PINOP, IOPINDIR_INPUT, IOPINRES_NONE, IOPINTYPE_NORMAL},	// RX
	{UART_TX_PORT, UART_TX_PIN, UART_TX_PINOP, IOPINDIR_OUTPUT, IOPINRES_NONE, IOPINTYPE_NORMAL},	// TX
	{UART_CTS_PORT, UART_CTS_PIN, UART_CTS_PINOP, IOPINDIR_INPUT, IOPINRES_NONE, IOPINTYPE_NORMAL},	// CTS
	{UART_RTS_PORT, UART_RTS_PIN, UART_RTS_PINOP, IOPINDIR_OUTPUT, IOPINRES_NONE, IOPINTYPE_NORMAL},// RTS
};

// UART configuration data
static const UARTCfg_t s_UartCfg = {
	.DevNo = 0,
	.pIOPinMap = s_UartPins,
	.NbIOPins = sizeof(s_UartPins) / sizeof(IOPinCfg_t),
	.Rate = 1000000,			// Rate
	.DataBits = 8,
	.Parity = UART_PARITY_NONE,
	.StopBits = 1,					// Stop bit
	.FlowControl = UART_FLWCTRL_NONE,
	.bIntMode = true,
	.IntPrio = 1, 					// use APP_IRQ_PRIORITY_LOW with Softdevice
	.EvtCallback = NULL,//nRFUartEvthandler,
	.bFifoBlocking = true,				// fifo blocking mode
	.RxMemSize = 0,
	.pRxMem = NULL,
	.TxMemSize = FIFOSIZE,
	.pTxMem = g_UarTxBuff,
};

UART g_Uart;

static const IOPinCfg_t s_SpiPins[] = SPI_PINS_CFG;

static const SPICfg_t s_SpiCfg = {
	.DevNo = SPI_DEVNO,
	.Phy = SPI_PHY,
    .Mode = SPIMODE_MASTER,
	.pIOPinMap = s_SpiPins,
	.NbIOPins = sizeof(s_SpiPins) / sizeof(IOPinCfg_t),
    .Rate = 4000000,   // Speed in Hz
    .DataSize = 8,      // Data Size
    .MaxRetry = 5,      // Max retries
    .BitOrder = SPIDATABIT_MSB,
    .DataPhase = SPIDATAPHASE_FIRST_CLK, // Data phase
    .ClkPol = SPICLKPOL_HIGH,         // clock polarity
    .ChipSel = SPICSEL_AUTO,
	.bDmaEn = true,	// DMA
	.bIntEn = false,
    .IntPrio = 6, //APP_IRQ_PRIORITY_LOW,      // Interrupt priority
    .EvtCB = NULL
};

SPI g_Spi;

//#endif

bool MT25QL512_Init(int DevNo, DeviceIntrf* pInterface);
bool MX25U1635E_init(int pDevNo, DeviceIntrf* ppInterface);
bool IS25LP512M_Init(int DevNo, DeviceIntrf* pInterface);
bool MX25U6435F_init(int DevNo, DeviceIntrf* pInterface);
bool FlashWriteDelayCallback(int DevNo, DeviceIntrf *pInterf);

static FlashCfg_t s_FlashCfg = {
    .DevNo = 0,
    .TotalSize = 32 * 1024 / 8,      // 32 Mbits
	.SectSize = 4 * 1024,		// 4K
    .BlkSize = 32 * 1024,		// 32K
    .WriteSize = 256,
    .AddrSize = 3,                          // 3 bytes addressing
    .pInitCB = MX25U1635E_init,
    .pWaitCB = FlashWriteDelayCallback,
};

static FlashCfg_t s_MT25QL512Cfg = {
	.DevNo = 0,
	.TotalSize = 512 * 1024 / 8,      	// 512 Mbits
	.SectSize = 4 * 1024,
	.BlkSize = 32 * 1024,						// minimum erase block size
	.WriteSize = 256,					// Write page size
	.AddrSize = 4,                      // 3 bytes addressing
	.DevId = 0x20ba20,
	.DevIdSize = 3,
	.pInitCB = MT25QL512_Init,			// no special init require.
	.pWaitCB = FlashWriteDelayCallback,					// blocking, no wait callback
};

// Micron N25Q128A
static FlashCfg_t s_N25Q128A_QFlashCfg = {
    .DevNo = 0,
    .TotalSize = 128 * 1024 / 8,      // 128 Mbits
	.SectSize = 4 * 1024,		// 4K
    .BlkSize = 32 * 1024,		// 32K
    .WriteSize = 256,
    .AddrSize = 3,      // 3 bytes addressing
	//.DevId = 0x18ba20,//0x1628c2,	// C21628
	//.DevIdSize = 3,
    .pInitCB = NULL,
    .pWaitCB = FlashWriteDelayCallback,
	.RdCmd = { FLASH_CMD_QREAD, 10},
	.WrCmd = { FLASH_CMD_QWRITE, 0 },
};

// Macronix MX25R3235F
static FlashCfg_t s_MX25R3235F_QFlashCfg = {
    .DevNo = 0,
    .TotalSize = 32 * 1024 / 8,      // 32 Mbits
	.SectSize = 4 * 1024,		// 4K
    .BlkSize = 64 * 1024,		// 64K
    .WriteSize = 256,
    .AddrSize = 3,                          // 3 bytes addressing
//	.DevId = 0x1628c2,	// C21628
//	.DevIdSize = 3,
    .pInitCB = NULL,
    .pWaitCB = NULL,
	.RdCmd = { FLASH_CMD_4READ, 6},
	.WrCmd = { FLASH_CMD_4WRITE, 0 },
};

// Macronix MX25R6435F
static FlashCfg_t s_MX25R6435F_QFlashCfg = {
    .DevNo = 0,
    .TotalSize = 64 * 1024 / 8,      // 32 Mbits
	.SectSize = 4 * 1024,		// 4K
    .BlkSize = 64 * 1024,		// 64K
    .WriteSize = 256,
    .AddrSize = 3,      // 3 bytes addressing
	.DevId = 0x1728c2,
	.DevIdSize = 3,
    .pInitCB = NULL,//MX25U6435F_init,
    .pWaitCB = NULL,
	.RdCmd = { FLASH_CMD_4READ, 6},
	.WrCmd = { FLASH_CMD_4WRITE, 0 },
};

// MX25L25645G
static const FlashCfg_t s_MX25L25645G_FlashCfg = FLASH_MX25L25645G(NULL, FlashWriteDelayCallback);
#if 0
{
	.DevNo = 0,
	.TotalSize = 256 * 1024 / 8,      	// 256 Mbits
	.SectSize = 4 * 1024,
	.BlkSize = 32 * 1024,						// minimum erase block size
	.WriteSize = 256,					// Write page size
	.AddrSize = 4,                      // 3 bytes addressing
	.DevId = 0x1920c2,
	.DevIdSize = 3,
	.pInitCB = NULL,//IS25LP512M_Init,			// no special init require.
	.pWaitCB = FlashWriteDelayCallback,					// blocking, no wait callback
	.RdCmd = { FLASH_CMD_QREAD, 6},
	.WrCmd = { FLASH_CMD_4WRITE, 0 },
};
#endif

// IS25LP512M
static FlashCfg_t s_IS25LP512_FlashCfg = {
	.DevNo = 0,
	.TotalSize = 512 * 1024 / 8,      	// 512 Mbits
	.SectSize = 4 * 1024,
	.BlkSize = 32 * 1024,						// minimum erase block size
	.WriteSize = 256,					// Write page size
	.AddrSize = 4,                      // 3 bytes addressing
	.DevId = 0x1a609d,
	.DevIdSize = 3,
	.pInitCB = NULL,//IS25LP512M_Init,			// no special init require.
	.pWaitCB = FlashWriteDelayCallback,					// blocking, no wait callback
	.RdCmd = { FLASH_CMD_QREAD, 6},
	.WrCmd = { FLASH_CMD_4WRITE, 0 },
};

Flash g_Flash;

//static uint8_t s_FlashCacheMem[DISKIO_SECT_SIZE];
//DiskIOCache_t g_FlashCache = {
//    -1, 0xFFFFFFFF, s_FlashCacheMem
//};

bool FlashWriteDelayCallback(int DevNo, DeviceIntrf *pInterf)
{
	msDelay(3);
	return true;
}

bool IS25LP512M_Init(int DevNo, DeviceIntrf* pInterface)
{
    if (pInterface == NULL)
        return false;

    int cnt = 0;

    uint32_t d;
    uint32_t r = 0;

    d = FLASH_CMD_RESET_ENABLE;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    d = FLASH_CMD_RESET_DEVICE;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    d = FLASH_CMD_READID;
    cnt = pInterface->Read(DevNo, (uint8_t*)&d, 1, (uint8_t*)&r, 3 );

    if (r != 0x1a609d && r != 0x1a709d)
    	return false;

    printf("Flash found!\r\n");

    // Enable write
    d = FLASH_CMD_EN4B;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    return true;
}

bool MT25QL512_Init(int DevNo, DeviceIntrf* pInterface)
{
    if (pInterface == NULL)
        return false;

    int cnt = 0;

    uint32_t d;
    uint32_t r = 0;

    d = FLASH_CMD_READID;
    cnt = pInterface->Read(DevNo, (uint8_t*)&d, 1, (uint8_t*)&r, 3 );

    if (r != 0x20ba20)
    	return false;

    printf("Flash found!\r\n");
    // Enable write
    d = FLASH_CMD_EN4B;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    return true;
}

bool MX25U1635E_init(int DevNo, DeviceIntrf* pInterface)
{
    if (pInterface == NULL)
        return false;

    int cnt = 0;

    uint32_t d;
    uint32_t r = 0;

    d = FLASH_CMD_READID;
    cnt = pInterface->Read(DevNo, (uint8_t*)&d, 1, (uint8_t*)&r, 2 );
    //if ( r != 0x28C2 )
    //	return false;

    printf("Flash found!\r\n");
    // Enable write
    d = FLASH_CMD_EN4B;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    return true;
}

bool MX25U6435F_init(int DevNo, DeviceIntrf* pInterface)
{
    if (pInterface == NULL)
        return false;

    int cnt = 0;

    uint32_t d;
    uint32_t r = 0;

    d = FLASH_CMD_RESET_ENABLE;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    d = FLASH_CMD_RESET_DEVICE;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    d = FLASH_CMD_READID;
    cnt = pInterface->Read(DevNo, (uint8_t*)&d, 1, (uint8_t*)&r, 3 );

    if (r != 0x1728C2)
    	return false;

    printf("Flash found!\r\n");

    // Enable write
    d = FLASH_CMD_EN4B;
    cnt = pInterface->Tx(DevNo, (uint8_t*)&d, 1);

    return true;
}

//
// Print a greeting message on standard output and exit.
//
// On embedded platforms this might require semi-hosting or similar.
//
// For example, for toolchains derived from GNU Tools for Embedded,
// to enable semi-hosting, the following was added to the linker:
//
// --specs=rdimon.specs -Wl,--start-group -lgcc -lc -lc -lm -lrdimon -Wl,--end-group
//
// Adjust it for other toolchains.
//
int main()
{
	//g_Uart.Init(s_UartCfg);

	// Retarget printf to UART
	//UARTRetargetEnable(g_Uart, STDOUT_FILENO);
	//UARTRetargetEnable(g_Uart, STDIN_FILENO);

	printf("Flash Memory Demo\r\n");
	//getchar();

	g_Spi.Init(s_SpiCfg);

   // IOPinConfig(FLASH_HOLD_PORT, FLASH_HOLD_PIN, FLASH_HOLD_PINOP, IOPINDIR_OUTPUT, IOPINRES_PULLUP, IOPINTYPE_NORMAL);

	// Regular SPI FLash
	//g_FlashDiskIO.Init(s_N25Q128A_QFlashCfg, &g_Spi, &g_FlashCache, 1);

	// QSPI flash
	//g_FlashDiskIO.Init(s_N25Q128A_QFlashCfg, &g_Spi, &g_FlashCache, 1);

	//if (g_FlashDiskIO.Init(s_MX25R6435F_QFlashCfg, &g_Spi, &g_FlashCache, 1) == false)
	if (g_Flash.Init(s_MX25L25645G_FlashCfg, &g_Spi)==false)//, &g_FlashCache, 1) == false)
	{
		printf("Init Flash failed\r\n");
	}

	//g_QFlash.Init(s_QFlashCfg, &g_FlashCache, 1);

	uint8_t buff[s_FlashCfg.SectSize];
	uint8_t buff2[s_FlashCfg.SectSize];
	uint8_t tmp[s_FlashCfg.SectSize];
	uint16_t *p = (uint16_t*)buff;

	memset(tmp, 0xa5, 512);
	for (int i = 0; i < 256; i++)
	{
		p[i] = 255-i;
	}

	printf("Erasing... Please wait\r\n");

	// Ease could take a few minutes
	//g_FlashDiskIO.EraseBlock(0, 4);
	g_Flash.Erase();
	printf("Writing 2KB data...\r\n");

	g_Flash.SectWrite(1, buff);

	p = (uint16_t*)buff2;
	for (int i = 0; i < 256; i++)
	{
		p[i] = i;
	}
	g_Flash.SectWrite(2UL, buff2);
	//g_FlashDiskIO.SectWrite(4, buff);
	//g_FlashDiskIO.SectWrite(8, buff);

	printf("Validate readback...\r\n");

	g_Flash.SectRead(1, tmp);

	for (int i = 0; i < 512; i++)
	{
		if (buff[i] != tmp[i])
		{
			printf("Failed %d\r\n", i);
			break;
		}
	}
	if (memcmp(buff, tmp, 512) != 0)
	{
		printf("Sector 0 verify failed\r\n");
	}
	else
	{
		printf("Sector 0 verify success\r\n");
	}

	memset(tmp, 0, 512);
	g_Flash.SectRead(2, tmp);
	for (int i = 0; i < 512; i++)
	{
		if (buff2[i] != tmp[i])
		{
			printf("Failed %d\r\n", i);
			break;
		}
	}
	if (memcmp(buff2, tmp, 512) != 0)
	{
		printf("Sector 2 verify failed\r\n");
	}
	else
	{
		printf("Sector 2 verify success\r\n");
	}
	g_Flash.EraseSector(0, 1);
	msDelay(1000);
	g_Flash.SectRead(0, tmp);

	memset(buff, 0xff, 512);
	if (memcmp(buff, tmp, 512) != 0)
	{
		printf("Sector 1 verify erase failed\r\n");
	}
	else
	{
		printf("Sector 1 verify erase success\r\n");
	}


	g_Flash.SectWrite(0, buff2);
	g_Flash.SectRead(0, tmp);

	if (memcmp(buff2, tmp, 512) != 0)
	{
		printf("Sector 0 verify failed\r\n");
	}
	else
	{
		printf("Sector 0 verify success\r\n");
	}

	memset(tmp, 0, 512);
	g_Flash.SectWrite(30, buff2);
	g_Flash.SectRead(30, tmp);
	if (memcmp(buff2, tmp, 512) != 0)
	{
		printf("Sector 30 verify failed\r\n");
	}
	else
	{
		printf("Sector 30 verify success\r\n");
	}

	memset(tmp, 0, 512);
	g_Flash.SectWrite(40, buff2);
	g_Flash.SectRead(40, tmp);
	if (memcmp(buff2, tmp, 512) != 0)
	{
		printf("Sector 40 verify failed\r\n");
	}
	else
	{
		printf("Sector 40 verify success\r\n");
	}

	printf("FLash Test Completed\r\n");

	while(1) { __WFE(); }

}
