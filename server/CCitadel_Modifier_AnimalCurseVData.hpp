#pragma once

#include <cstdint>

struct ModelChange_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x808
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AnimalCurseVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	ModelChange_t m_CursedModel; // 0x638	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x720	
	// MPropertyStartGroup "+Properties"
	float m_flModelScale; // 0x800	
};

