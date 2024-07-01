#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x930
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x320	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x478	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5d0	
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x728	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x72c	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x72d	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07b4[0x4]; // 0x7b4
public:
	// MPropertyFriendlyName "Maximum Trace Length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x7b8	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x910	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x914	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad0919[0x3]; // 0x919
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x91c	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x928	
};

