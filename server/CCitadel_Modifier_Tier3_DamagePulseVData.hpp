#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x758
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Tier3_DamagePulseVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x658	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPulseTickSound; // 0x738	
	// MPropertyStartGroup "Gameplay"
	int32_t m_iMaxTargets; // 0x748	
	float m_flRadius; // 0x74c	
	float m_flDamagePerPulse; // 0x750	
	float m_flTickRate; // 0x754	
};

