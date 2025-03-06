#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FissureWallVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebrisParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpikeParticle; // 0x738	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_WallSpawnSound; // 0x818	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x828	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyVisionModifier; // 0x838	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x848	
};

