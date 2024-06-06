#pragma once

#include <cstdint>

struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1b8	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x220	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x22c	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x22d	
};

