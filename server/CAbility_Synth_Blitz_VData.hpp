#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Blitz_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BlitzModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_TechAmpModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlowParticle; // 0x15e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProcSound; // 0x16c8	
};

