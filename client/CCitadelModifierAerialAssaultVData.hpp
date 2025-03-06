#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x748	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x828	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x838	
	float m_flAirSpeed; // 0x83c	
	float m_flFallSpeed; // 0x840	
};

