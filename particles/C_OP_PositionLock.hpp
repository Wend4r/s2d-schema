#pragma once

#include <cstdint>

struct CParticleTransformInput;
struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PositionLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1b8	
	// MPropertyFriendlyName "start fadeout min"
	float m_flStartTime_min; // 0x220	
	// MPropertyFriendlyName "start fadeout max"
	float m_flStartTime_max; // 0x224	
	// MPropertyFriendlyName "start fadeout exponent"
	float m_flStartTime_exp; // 0x228	
	// MPropertyFriendlyName "end fadeout min"
	float m_flEndTime_min; // 0x22c	
	// MPropertyFriendlyName "end fadeout max"
	float m_flEndTime_max; // 0x230	
	// MPropertyFriendlyName "end fadeout exponent"
	float m_flEndTime_exp; // 0x234	
	// MPropertyFriendlyName "distance fade range"
	float m_flRange; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad023c[0x4]; // 0x23c
public:
	// MPropertyFriendlyName "distance fade bias"
	CParticleCollectionFloatInput m_flRangeBias; // 0x240	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x398	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x39c	
	// MPropertyFriendlyName "lock rotation"
	bool m_bLockRot; // 0x3a0	
private:
	[[maybe_unused]] uint8_t __pad03a1[0x7]; // 0x3a1
public:
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x3a8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xa00	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xa04	
};

