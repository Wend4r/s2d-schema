#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // 0x638	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x718	
	float m_flVerticalCameraOffset; // 0x71c	
	float m_flVerticalCameraOffsetLerpTime; // 0x720	
	float m_flVerticalCameraOffsetBias; // 0x724	
};

