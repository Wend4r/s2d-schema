#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FissureWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyWallParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyWallParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_WallTravelSoundLoop; // 0x1788	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WallModifier; // 0x1798	
};

