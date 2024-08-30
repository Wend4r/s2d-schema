#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FissureWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyWallParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyWallParticle; // 0x15d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_WallTravelSoundLoop; // 0x16b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WallModifier; // 0x16c0	
};

