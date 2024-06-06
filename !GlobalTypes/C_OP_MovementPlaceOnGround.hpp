#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1b8	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x310	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x314	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x318	
	// MPropertyFriendlyName "interpolation rate"
	float m_flLerpRate; // 0x31c	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x320	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3a0	
	// MPropertyFriendlyName "reference CP 1"
	int32_t m_nRefCP1; // 0x3a4	
	// MPropertyFriendlyName "reference CP 2"
	int32_t m_nRefCP2; // 0x3a8	
	// MPropertyFriendlyName "interploation distance tolerance cp"
	int32_t m_nLerpCP; // 0x3ac	
private:
	[[maybe_unused]] uint8_t __pad03b0[0x8]; // 0x3b0
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3b8	
	// MPropertyFriendlyName "include default contents trace hulls"
	bool m_bIncludeShotHull; // 0x3bc	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3bd	
private:
	[[maybe_unused]] uint8_t __pad03be[0x2]; // 0x3be
public:
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x3c0	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x3c1	
private:
	[[maybe_unused]] uint8_t __pad03c2[0x2]; // 0x3c2
public:
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x3c4	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x3c8	
};

