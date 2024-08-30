#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySleepDaggerVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SleepModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_DrowsyModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_SleepBombModifier; // 0x15f0	
};

