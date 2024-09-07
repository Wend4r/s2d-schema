#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe48
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hHookVictim"
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "Vector m_vecHookTargetStartPos"
class CCitadel_Ability_Hook : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "HookVictimChanged"
	CHandle< C_BaseEntity > m_hHookVictim; // 0xc60	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecHookTargetStartPos; // 0xc68	
	bool m_bIsAltCast; // 0xc74	
};

