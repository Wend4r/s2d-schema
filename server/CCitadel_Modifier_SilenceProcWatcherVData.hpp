#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceProcModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceActiveModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x650	
	CUtlString m_sInstantProcIfCasterHasModifier; // 0x660	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x668	
};

