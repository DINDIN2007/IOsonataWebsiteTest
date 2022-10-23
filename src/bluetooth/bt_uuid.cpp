/**-------------------------------------------------------------------------
@file	bt_uuid.cpp

@brief	Bluetooth UUID implementation

Generic implementation & definitions of Bluetooth UUID

@author	Hoang Nguyen Hoan
@date	Oct. 22, 2022

@license

MIT License

Copyright (c) 2022, I-SYST, all rights reserved

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
#include <memory.h>

#include "bluetooth/bt_uuid.h"

typedef struct __Bt_Base_Uuid_Tbl_Entry {
	uint8_t Uuid[16];
	bool bValid;
} BtBaseUuidTblEntry_t;

#ifndef BT_BASE_UUID_ENTRY_MAX_COUNT
#define BT_BASE_UUID_ENTRY_MAX_COUNT		4
#endif

alignas(4) static BtBaseUuidTblEntry_t s_BtBaseUuidTbl[BT_BASE_UUID_ENTRY_MAX_COUNT] = {{false,},};
static uint32_t s_NbUuidEntry = 0;

int8_t BtUuidFindBase(uint8_t const Uuid[16])
{
	for (int i = 0; i < BT_BASE_UUID_ENTRY_MAX_COUNT; i++)
	{
		if (s_BtBaseUuidTbl[i].bValid == true)
		{
			if (memcmp(s_BtBaseUuidTbl[i].Uuid, Uuid, 16) == 0)
			{
				return i;
			}
		}
	}

	return -1;
}

int8_t BtUuidAddBase(uint8_t const Uuid[16])
{
	int8_t idx = BtUuidFindBase(Uuid);

	if (idx >= 0)
	{
		return idx;
	}

	for (int i = 0; i < BT_BASE_UUID_ENTRY_MAX_COUNT; i++)
	{
		if (s_BtBaseUuidTbl[i].bValid == false)
		{
			s_BtBaseUuidTbl[i].bValid = true;
			memcpy(s_BtBaseUuidTbl[i].Uuid, Uuid, 16);

			return i;
		}
	}

	return -1;
}

bool BtUuidGetBase(int8_t idx, uint8_t Uuid[16])
{
	if (idx < 0 || idx >= BT_BASE_UUID_ENTRY_MAX_COUNT)
	{
		return false;
	}

	if (s_BtBaseUuidTbl[idx].bValid)
	{
		memcpy(Uuid, s_BtBaseUuidTbl[idx].Uuid, 16);

		return true;
	}

	return false;
}

