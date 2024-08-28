#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
// Has VTable
// 
// MNetworkVarNames "float m_flTotalPendingDamage"
class CCitadel_Ability_Shiv_Defer_Damage : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0xe0]; // 0xab0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flTotalPendingDamage; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x1c]; // 0xb94
public:
	GameTime_t m_flLastDeferredDamageApplicationTime; // 0xbb0	
};

