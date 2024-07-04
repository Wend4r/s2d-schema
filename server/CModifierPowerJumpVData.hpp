#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // 0x5f0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x6d0	
	float m_flVerticalCameraOffset; // 0x6d4	
	float m_flVerticalCameraOffsetLerpTime; // 0x6d8	
	float m_flVerticalCameraOffsetBias; // 0x6dc	
};

