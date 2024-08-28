#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FissureWallVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebrisParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpikeParticle; // 0x6d8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_WallSpawnSound; // 0x7b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x7c8	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyVisionModifier; // 0x7d8	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x7e8	
};

