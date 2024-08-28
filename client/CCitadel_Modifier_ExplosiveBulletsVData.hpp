#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x808
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ExplosiveBulletsVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x718	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7f8	
};

