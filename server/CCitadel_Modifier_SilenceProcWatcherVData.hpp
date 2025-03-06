#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x688	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x698	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x6a8	
	CUtlString m_sInstantProcIfCasterHasModifier; // 0x6b8	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6c0	
};

