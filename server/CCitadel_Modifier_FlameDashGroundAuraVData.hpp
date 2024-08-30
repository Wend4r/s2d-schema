#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FlameDashGroundAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x638	
	// MPropertyStartGroup "Gameplay"
	float m_flHeight; // 0x718	
};

