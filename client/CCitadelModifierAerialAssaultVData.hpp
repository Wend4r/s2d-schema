#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x5e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7b0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x7c0	
	float m_flAirSpeed; // 0x7c4	
	float m_flFallSpeed; // 0x7c8	
};

