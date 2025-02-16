#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce0
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
	CHandle< CBaseEntity > m_hHookVictim; // 0xb00	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecHookTargetStartPos; // 0xb08	
	bool m_bProjectileHit; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b15[0x3]; // 0xb15
public:
	float m_flLastUppercutRestoreTime; // 0xb18	
};

