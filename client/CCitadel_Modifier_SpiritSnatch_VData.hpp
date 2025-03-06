#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SpiritSnatch_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x688	
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x698	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x6a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x788	
};

