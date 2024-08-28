#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MagicShock_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // 0x628	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_hDamageTrackModifier; // 0x708	
};

