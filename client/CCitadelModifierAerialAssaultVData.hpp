#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x5f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7c8	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x7d8	
	float m_flAirSpeed; // 0x7dc	
	float m_flFallSpeed; // 0x7e0	
};

