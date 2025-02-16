#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x668	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x678	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x688	
	CUtlString m_sInstantProcIfCasterHasModifier; // 0x698	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6a0	
};

