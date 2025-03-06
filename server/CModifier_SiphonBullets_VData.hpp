#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x878
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_SiphonBullets_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x688	
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x698	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x868	
};

