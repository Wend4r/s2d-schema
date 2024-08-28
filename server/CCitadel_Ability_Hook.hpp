#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc90
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
	CHandle< CBaseEntity > m_hHookVictim; // 0xab0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xab4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecHookTargetStartPos; // 0xab8	
	bool m_bProjectileHit; // 0xac4	
private:
	[[maybe_unused]] uint8_t __pad0ac5[0x3]; // 0xac5
public:
	float m_flLastUppercutRestoreTime; // 0xac8	
};

