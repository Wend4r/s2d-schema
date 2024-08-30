#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf0
// Has VTable
// 
// MNetworkVarNames "bool m_bSprinting"
// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
// MNetworkVarNames "GameTime_t m_flSprintStartTime"
class CCitadel_Ability_Sprint : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nSprintParticle; // 0xad8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSprintingChanged"
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSprinting; // 0xadc	
private:
	[[maybe_unused]] uint8_t __pad0add[0x3]; // 0xadd
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatStartTime; // 0xae0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatEndTime; // 0xae4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSprintStartTime; // 0xae8	
	bool m_bInCombat; // 0xaec	
};

