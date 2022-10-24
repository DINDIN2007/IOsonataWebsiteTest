/**-------------------------------------------------------------------------
@file	ble_srvc.h

@brief	Generic Bluetooth LE service and characteristic

Generic definitions for BLE service/characteristic implementation

@author	Hoang Nguyen Hoan
@date	Oct. 15, 2022

@license

MIT License

Copyright (c) 2022 I-SYST inc. All rights reserved.

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
#ifndef __BLE_SRVC_H__
#define __BLE_SRVC_H__ 

#include <stdint.h>
#include <string.h>

#include "bluetooth/bt_uuid.h"

/// Max supported 128bits custom UUID.
/// Beware this value must be less or equal the softdevice NRF_SDH_BLE_VS_UUID_COUNT
/// First UUID base is always used for the service.
#define BLESVC_UUID_BASE_MAXCNT			4

typedef struct __Ble_Srvc	BleSrvc_t;

#pragma pack(push, 4)

/**
 * @brief	Callback on write
 */
typedef void (*BleSrvcWrCb_t) (BleSrvc_t *pBleSvc, uint8_t *pData, int Offset, int Len);

/**
 * @brief	Callback on set notification
 */
typedef void (*BleSrvcSetNotifCb_t) (BleSrvc_t *pBleSvc, bool bEnable);

/**
 * @brief	Callback when transmission is completed
 *
 * @param	pBlueIOSvc
 * @param	CharIdx
 */
typedef void (*BleSrvcTxComplete_t) (BleSrvc_t *pBleSvc, int CharIdx);

/**
 * @brief	Callback on authorization request
 *
 * @param	pBlueIOSvc
 * @param	p_ble_evt
 */
//typedef void (*BleSrvcAuthRqst_t)(BleSrvc_t *pBleSvc, ble_evt_t * p_ble_evt);

// Service connection security types
typedef enum {
	BLESRVC_SECTYPE_NONE,				//!< open, no security
	BLESRVC_SECTYPE_STATICKEY_NO_MITM,	//!< Bonding static pass key without Man In The Middle
	BLESRVC_SECTYPE_STATICKEY_MITM,		//!< Bonding static pass key with MITM
	BLESRVC_SECTYPE_LESC_MITM,			//!< LE secure encryption
	BLESRVC_SECTYPE_SIGNED_NO_MITM,		//!< AES signed encryption without MITM
	BLESRVC_SECTYPE_SIGNED_MITM,		//!< AES signed encryption with MITM
} BLESRVC_SECTYPE;

#pragma pack(push,4)

typedef struct __Ble_Srvc_Char_Data {
    uint16_t Uuid;                      //!< char UUID
    int MaxDataLen;                     //!< char max data length
    uint32_t Property;                  //!< char properties define by BLUEIOSVC_CHAR_PROP_...
    const char *pDesc;                  //!< char UTF-8 description string
    BleSrvcWrCb_t WrCB;                  //!< Callback for write char, set to NULL for read char
    BleSrvcSetNotifCb_t SetNotifCB;		//!< Callback on set notification
    BleSrvcTxComplete_t TxCompleteCB;	//!< Callback when TX is completed
    uint8_t *pDefValue;					//!< pointer to char default values
    uint16_t ValueLen;					//!< Default value length in bytes
    //ble_gatts_char_handles_t Hdl;       //!< char handle
    bool bNotify;                       //!< Notify flag for read characteristic
    uint8_t BaseUuidIdx;				//!< Index of Base UUID used for this characteristic.
} BleSrvcChar_t;

/*
 * User configuration for the service to be created
 */
typedef struct __Ble_Srvc_Config {
	BLESRVC_SECTYPE SecType;			//!< Secure or Open service/char
	uint8_t UuidBase[BLESVC_UUID_BASE_MAXCNT][16];//!< Base UUIDs
	int				NbUuidBase;			//!< Number of UUID defined in the UuidBase array
	uint16_t		UuidSvc;			//!< Service UUID
	int             NbChar;				//!< Total number of characteristics for the service
	BleSrvcChar_t	*pCharArray;           //!< Pointer a an array of characteristic
    uint8_t			*pLongWrBuff;		//!< pointer to user long write buffer
    int				LongWrBuffSize;		//!< long write buffer size
    //BLESRVC_AUTHREQ	AuthReqCB;			//!< Authorization request callback
} BleSrvcCfg_t;

typedef BleSrvcCfg_t	BLESRVC_CFG;

/*
 * Blue IO Service private data to be passed when calling service related functions.
 * The data is filled by BlueIOBleSrvcInit function.
 * Pointer to this structure is often referred as Service Handle
 *
 */
struct __Ble_Srvc {
    int             NbChar;				//!< Number of characteristic defined for this service
    BleSrvcChar_t 	*pCharArray;        //!< Pointer to array of characteristics
    uint16_t        SrvcHdl;            //!< Service handle
    uint16_t        ConnHdl;			//!< Connection handle
    uint16_t        UuidSvc;            //!< Service UUID
    uint8_t         UuidType[BLESVC_UUID_BASE_MAXCNT];
    uint8_t			*pLongWrBuff;		//!< pointer to user long write buffer
    int				LongWrBuffSize;		//!< long write buffer size
    void			*pContext;
    //BLESRVC_AUTHREQ	AuthReqCB;			//!< Authorization request callback
};

#pragma pack(pop)

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief	Create BLE custom service
 *
 * @param	pSrvc	: Pointer to Blue IO service data to be filled when service
 * 					  is created
 * @param	pCfg	: Pointer to configuration data for the service creation
 *
 * @return	0 - Success
 */
uint32_t BleSrvcInit(BleSrvc_t *pSrvc, const BleSrvcCfg_t *pCfg);

uint32_t BleSrvcCharNotify(BleSrvc_t *pSrvc, int Idx, uint8_t *pData, uint16_t DataLen);

#ifdef __cplusplus
}
#endif

#endif // __BLE_SRVC_H__
