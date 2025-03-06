#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x938
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SuperAcolytesGlove_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x688	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x698	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x778	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FistReadyEffect; // 0x858	
};

