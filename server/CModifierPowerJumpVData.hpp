#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // 0x658	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x738	
	float m_flVerticalCameraOffset; // 0x73c	
	float m_flVerticalCameraOffsetLerpTime; // 0x740	
	float m_flVerticalCameraOffsetBias; // 0x744	
};

