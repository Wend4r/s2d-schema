#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechOverflowProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x628	
	CEmbeddedSubclass< CCitadelModifier > m_ProcModifier; // 0x638	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuildupSuccessEffect; // 0x648	
};

