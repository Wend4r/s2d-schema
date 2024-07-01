#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // 0x5e0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x6c0	
	float m_flVerticalCameraOffset; // 0x6c4	
	float m_flVerticalCameraOffsetLerpTime; // 0x6c8	
	float m_flVerticalCameraOffsetBias; // 0x6cc	
};

