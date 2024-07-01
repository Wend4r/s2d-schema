#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x738
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x610	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceProcModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceActiveModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x640	
	CUtlString m_sInstantProcIfCasterHasModifier; // 0x650	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x658	
};

