#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPsychicPulseVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x15d8	
	// MPropertyStartGroup "+Psychic Pulse Properties"
	float m_flCastEffectLifetime; // 0x16b8	
	float m_flConeAngle; // 0x16bc	
	float m_flConeHalfWidth; // 0x16c0	
};

