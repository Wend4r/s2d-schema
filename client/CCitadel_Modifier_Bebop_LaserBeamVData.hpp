#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bebop_LaserBeamVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x5e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x7b0	
	CSoundEventName m_strLaserEndSound; // 0x7c0	
	CSoundEventName m_strLaserLoopSound; // 0x7d0	
	CSoundEventName m_strLaserHitSound; // 0x7e0	
};

