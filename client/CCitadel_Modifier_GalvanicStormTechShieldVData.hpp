#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_GalvanicStormTechShieldVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x5e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5f0	
	float m_flExplodeSpeed; // 0x6d0	
};

