#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
// MNetworkVarNames "bool m_bSendHandle"
class CHandleTest : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_Handle; // 0x4b8	
	// MNetworkEnable
	bool m_bSendHandle; // 0x4bc	
};

