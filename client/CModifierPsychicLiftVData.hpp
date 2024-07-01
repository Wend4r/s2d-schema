#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPsychicLiftVData : public CCitadel_Modifier_SilencedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x880	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x960	
};

