#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_GalvanicStormTechShieldVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x5f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x608	
	float m_flExplodeSpeed; // 0x6e8	
};

