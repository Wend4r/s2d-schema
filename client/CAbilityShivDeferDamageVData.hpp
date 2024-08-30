#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivDeferDamageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveCastParticle; // 0x14f0	
	// MPropertyStartGroup "+Defer Properties"
	float m_flDeferredDamageApplicationInterval; // 0x15d0	
};

