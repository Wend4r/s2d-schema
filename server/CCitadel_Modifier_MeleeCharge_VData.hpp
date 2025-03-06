#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MeleeCharge_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x688	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x768	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ReloadVisualModifier; // 0x848	
	CEmbeddedSubclass< CCitadelModifier > m_AmmoAddedVisualModifier; // 0x858	
};

