#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x798
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DisarmProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x688	
	CEmbeddedSubclass< CCitadelModifier > m_DisarmProcModifier; // 0x698	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x6a8	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6b8	
};

