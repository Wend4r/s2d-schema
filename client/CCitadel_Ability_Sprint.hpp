#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
// 
// MNetworkVarNames "bool m_bSprinting"
// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
// MNetworkVarNames "GameTime_t m_flSprintStartTime"
class CCitadel_Ability_Sprint : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nSprintParticle; // 0xc60	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSprintingChanged"
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSprinting; // 0xc64	
private:
	[[maybe_unused]] uint8_t __pad0c65[0x3]; // 0xc65
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatStartTime; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatEndTime; // 0xc6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSprintStartTime; // 0xc70	
	bool m_bInCombat; // 0xc74	
};

