#pragma once

#include <cstdint>

struct ModelChange_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x828
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AnimalCurseVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	ModelChange_t m_CursedModel; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x740	
	// MPropertyStartGroup "+Properties"
	float m_flModelScale; // 0x820	
};

