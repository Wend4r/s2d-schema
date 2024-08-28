#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x628	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceProcModifier; // 0x638	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceActiveModifier; // 0x648	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x658	
	CUtlString m_sInstantProcIfCasterHasModifier; // 0x668	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x670	
};

