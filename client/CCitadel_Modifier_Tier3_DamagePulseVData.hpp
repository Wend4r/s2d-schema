#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x738
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Tier3_DamagePulseVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x638	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPulseTickSound; // 0x718	
	// MPropertyStartGroup "Gameplay"
	int32_t m_iMaxTargets; // 0x728	
	float m_flRadius; // 0x72c	
	float m_flDamagePerPulse; // 0x730	
	float m_flTickRate; // 0x734	
};

