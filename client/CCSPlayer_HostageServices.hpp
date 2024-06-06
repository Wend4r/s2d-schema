#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
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
	CHandle< C_BaseEntity > m_hCarriedHostage; // 0x40	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCarriedHostageProp; // 0x44	
};

