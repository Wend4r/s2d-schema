#pragma once

#include <cstdint>

struct CParticleModelInput;
struct CParticleTransformInput;
struct ParticleAttributeIndex_t;
struct CPerParticleVecInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xad8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LockToBone : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model input"
	CParticleModelInput m_modelInput; // 0x1b8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_transformInput; // 0x218	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x280	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x284	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x288	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x28c	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x290	
	// MPropertyFriendlyName "rigid lock"
	bool m_bRigid; // 0x310	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x311	
private:
	[[maybe_unused]] uint8_t __pad0312[0x2]; // 0x312
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x314	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x318	
	// MPropertyStartGroup "Set Rotations to Bones"
	// MPropertyFriendlyName "lock rotations to bone orientation"
	ParticleRotationLockType_t m_nRotationSetType; // 0x31c	
	// MPropertyFriendlyName "rigid set rotation from bones"
	bool m_bRigidRotationLock; // 0x320	
private:
	[[maybe_unused]] uint8_t __pad0321[0x7]; // 0x321
public:
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x328	
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x980	
};

