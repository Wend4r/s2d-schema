#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbf0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryWindowEndTime"
// MNetworkVarNames "GameTime_t m_flNextParryTime"
// MNetworkVarNames "GameTime_t m_flStateStartTime"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
// MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
// MNetworkVarNames "Vector m_vAirDashDir"
// MNetworkVarNames "bool m_bAttackStartedWhileSliding"
// MNetworkVarNames "GameTime_t m_flLightChainEndTime"
// MNetworkVarNames "int m_nLightChainCount"
class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flParryWindowEndTime; // 0xba0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextParryTime; // 0xba4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStateStartTime; // 0xba8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashStartTime; // 0xbac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EMeleeHold_AttackState m_eCurrentAttackState; // 0xbb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EMeleeHold_AttackType m_eCurrentAttackType; // 0xbb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAirDashDir; // 0xbb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bAttackStartedWhileSliding; // 0xbc4	
private:
	[[maybe_unused]] uint8_t __pad0bc5[0x3]; // 0xbc5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLightChainEndTime; // 0xbc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nLightChainCount; // 0xbcc	
	bool m_bCreatedChargeEffects; // 0xbd0	
private:
	[[maybe_unused]] uint8_t __pad0bd1[0x3]; // 0xbd1
public:
	QAngle m_angForced; // 0xbd4	
};

