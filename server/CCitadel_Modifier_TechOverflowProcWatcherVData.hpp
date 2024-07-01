#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechOverflowProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x610	
	CEmbeddedSubclass< CCitadelModifier > m_ProcModifier; // 0x620	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuildupSuccessEffect; // 0x630	
};

