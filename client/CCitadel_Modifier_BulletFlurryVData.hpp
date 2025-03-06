#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x958
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BulletFlurryVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x868	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0x948	
};

