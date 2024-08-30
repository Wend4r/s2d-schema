#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakBreachVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AllySmokeAOEModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemySmokeAOEModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // 0x1510	
};

