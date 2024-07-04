#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Burrow_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowPlayerParticle; // 0x5f0	
	float m_flDesatAmount; // 0x6d0	
	Color m_DesatTint; // 0x6d4	
	Color m_SatTint; // 0x6d8	
	Color m_Outline; // 0x6dc	
};

