#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BubbleVData : public CCitadel_Modifier_SilencedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x898	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_ExplodeSound; // 0x978	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x988	
};

