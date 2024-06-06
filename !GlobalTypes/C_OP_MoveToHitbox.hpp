#pragma once

#include <cstdint>

struct CParticleModelInput;
struct CParticleTransformInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x470
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model input"
	CParticleModelInput m_modelInput; // 0x1b8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_transformInput; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0280[0x4]; // 0x280
public:
	// MPropertyFriendlyName "lifetime lerp start"
	float m_flLifeTimeLerpStart; // 0x284	
	// MPropertyFriendlyName "lifetime lerp end"
	float m_flLifeTimeLerpEnd; // 0x288	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x28c	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x290	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x310	
private:
	[[maybe_unused]] uint8_t __pad0311[0x3]; // 0x311
public:
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x314	
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x318	
};

