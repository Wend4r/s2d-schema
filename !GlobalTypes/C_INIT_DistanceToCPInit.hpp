#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x490	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5f0	
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x750	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x754	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x755	
private:
	[[maybe_unused]] uint8_t __pad07d5[0x3]; // 0x7d5
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
public:
	// MPropertyFriendlyName "Maximum Trace Length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x7e0	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x940	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x944	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad0949[0x3]; // 0x949
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x94c	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x958	
};

