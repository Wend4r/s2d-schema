#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bUsingThisMelee"
// MNetworkVarNames "bool m_bUsingMeleeTagActive"
// MNetworkVarNames "bool m_bHitWithThisAttack"
// MNetworkVarNames "GameTime_t m_flLastActivateTime"
// MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
// MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
class CCitadel_Ability_Melee_Base : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bUsingThisMelee; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bUsingMeleeTagActive; // 0xc51	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bHitWithThisAttack; // 0xc52	
private:
	[[maybe_unused]] uint8_t __pad0c53[0x1]; // 0xc53
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLastActivateTime; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextAttackAllowedTime; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAttackTriggeredTime; // 0xc5c	
};

