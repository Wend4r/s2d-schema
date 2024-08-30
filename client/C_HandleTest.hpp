#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
// MNetworkVarNames "bool m_bSendHandle"
class C_HandleTest : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_Handle; // 0x558	
	// MNetworkEnable
	bool m_bSendHandle; // 0x55c	
};

