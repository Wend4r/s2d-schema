#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilencerProcActiveVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SilencerActiveParticle; // 0x6f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceActiveModifier; // 0x7d0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletSlowModifier; // 0x7e0	
};

