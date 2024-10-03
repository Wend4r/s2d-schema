#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x498
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x320	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x480	
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x484	
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x490	
};

