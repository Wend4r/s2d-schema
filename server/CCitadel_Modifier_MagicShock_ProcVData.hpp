#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MagicShock_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // 0x610	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_hDamageTrackModifier; // 0x6f0	
	CEmbeddedSubclass< CBaseModifier > m_hSlowModifier; // 0x700	
};

