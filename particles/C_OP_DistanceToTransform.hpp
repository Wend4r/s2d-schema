#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
struct CParticleTransformInput;
struct CPerParticleVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c0	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x318	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x470	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5c8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformStart; // 0x720	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x788	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x789	
private:
	[[maybe_unused]] uint8_t __pad0809[0x3]; // 0x809
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x80c	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x810	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x814	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x818	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x81c	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x81d	
private:
	[[maybe_unused]] uint8_t __pad081e[0x2]; // 0x81e
public:
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x820	
};

