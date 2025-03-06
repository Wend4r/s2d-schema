#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Burrow_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowPlayerParticle; // 0x658	
	float m_flDesatAmount; // 0x738	
	Color m_DesatTint; // 0x73c	
	Color m_SatTint; // 0x740	
	Color m_Outline; // 0x744	
};

