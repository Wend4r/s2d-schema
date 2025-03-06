#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x758
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_GrandFinale_BuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x668	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x748	
};

