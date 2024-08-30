#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryWindowEndTime"
// MNetworkVarNames "GameTime_t m_flNextParryTime"
// MNetworkVarNames "GameTime_t m_flStateStartTime"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
// MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
// MNetworkVarNames "Vector m_vAirDashDir"
class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flParryWindowEndTime; // 0xb60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextParryTime; // 0xb64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStateStartTime; // 0xb68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xb6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	EMeleeHold_AttackState m_eCurrentAttackState; // 0xb70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	EMeleeHold_AttackType m_eCurrentAttackType; // 0xb74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vAirDashDir; // 0xb78	
	bool m_bCreatedChargeEffects; // 0xb84	
private:
	[[maybe_unused]] uint8_t __pad0b85[0x3]; // 0xb85
public:
	QAngle m_angForced; // 0xb88	
};

