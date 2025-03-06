#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivDeferDamageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveCastParticle; // 0x15c8	
	// MPropertyStartGroup "+Defer Properties"
	float m_flDeferredDamageApplicationInterval; // 0x16a8	
};

