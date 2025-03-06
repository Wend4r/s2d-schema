#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
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
	GameTime_t m_flParryWindowEndTime; // 0xcd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextParryTime; // 0xcd4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStateStartTime; // 0xcd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashStartTime; // 0xcdc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EMeleeHold_AttackState m_eCurrentAttackState; // 0xce0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EMeleeHold_AttackType m_eCurrentAttackType; // 0xce4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAirDashDir; // 0xce8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bAttackStartedWhileSliding; // 0xcf4	
private:
	[[maybe_unused]] uint8_t __pad0cf5[0x3]; // 0xcf5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLightChainEndTime; // 0xcf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nLightChainCount; // 0xcfc	
	bool m_bCreatedChargeEffects; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d01[0x3]; // 0xd01
public:
	QAngle m_angForced; // 0xd04	
};

