#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostage"
// MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostageProp"
class CCSPlayer_HostageServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCarriedHostage; // 0x40	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCarriedHostageProp; // 0x44	
};

