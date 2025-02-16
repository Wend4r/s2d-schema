#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1690
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPsychicLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x1590	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x15a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetCastSound; // 0x1680	
};

