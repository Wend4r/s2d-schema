#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viper_PetrifyBolaVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_PetrifyModifier; // 0x16b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBolaExplodeSound; // 0x16c8	
};

