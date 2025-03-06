#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BigBoltVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x668	
	float m_flModelScale; // 0x748	
};

