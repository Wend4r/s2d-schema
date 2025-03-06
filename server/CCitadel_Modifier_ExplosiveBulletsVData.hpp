#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x878
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ExplosiveBulletsVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x868	
};

