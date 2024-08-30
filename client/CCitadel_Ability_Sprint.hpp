#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "bool m_bSprinting"
// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
// MNetworkVarNames "GameTime_t m_flSprintStartTime"
class CCitadel_Ability_Sprint : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nSprintParticle; // 0xc50	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSprintingChanged"
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSprinting; // 0xc54	
private:
	[[maybe_unused]] uint8_t __pad0c55[0x3]; // 0xc55
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatStartTime; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatEndTime; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSprintStartTime; // 0xc60	
	bool m_bInCombat; // 0xc64	
};

