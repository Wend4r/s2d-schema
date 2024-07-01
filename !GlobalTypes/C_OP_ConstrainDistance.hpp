#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x480
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x1b8	
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x310	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x468	
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x46c	
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x478	
};

