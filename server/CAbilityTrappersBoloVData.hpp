#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTrappersBoloVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TrapModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16b8	
};

