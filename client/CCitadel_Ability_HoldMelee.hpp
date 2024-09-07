#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd28
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
	GameTime_t m_flParryWindowEndTime; // 0xce0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextParryTime; // 0xce4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStateStartTime; // 0xce8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xcec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	EMeleeHold_AttackState m_eCurrentAttackState; // 0xcf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	EMeleeHold_AttackType m_eCurrentAttackType; // 0xcf4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vAirDashDir; // 0xcf8	
	bool m_bCreatedChargeEffects; // 0xd04	
private:
	[[maybe_unused]] uint8_t __pad0d05[0x3]; // 0xd05
public:
	QAngle m_angForced; // 0xd08	
};

