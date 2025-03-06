#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_TechUpgrade_CorpseExplosionVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1610	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ExplosionModifier; // 0x16f0	
};

