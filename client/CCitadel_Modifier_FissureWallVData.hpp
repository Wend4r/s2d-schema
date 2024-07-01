#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FissureWallVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebrisParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpikeParticle; // 0x6c0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_WallSpawnSound; // 0x7a0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x7b0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyVisionModifier; // 0x7c0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x7d0	
};

