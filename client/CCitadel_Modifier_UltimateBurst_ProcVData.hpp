#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x788
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_UltimateBurst_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // 0x688	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProcSound; // 0x768	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_StunModifier; // 0x778	
};

