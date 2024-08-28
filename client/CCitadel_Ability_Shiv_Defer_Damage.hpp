#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "float m_flTotalPendingDamage"
class CCitadel_Ability_Shiv_Defer_Damage : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xe0]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flTotalPendingDamage; // 0xd08	
};

