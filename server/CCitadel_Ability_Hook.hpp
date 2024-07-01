#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hHookVictim"
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "Vector m_vecHookTargetStartPos"
class CCitadel_Ability_Hook : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "HookVictimChanged"
	CHandle< CBaseEntity > m_hHookVictim; // 0xaa8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xaac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecHookTargetStartPos; // 0xab0	
	bool m_bProjectileHit; // 0xabc	
private:
	[[maybe_unused]] uint8_t __pad0abd[0x3]; // 0xabd
public:
	float m_flLastUppercutRestoreTime; // 0xac0	
};

