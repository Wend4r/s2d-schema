#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x518
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1c0	
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x318	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x470	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0xc]; // 0x4f4
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x500	
	// MPropertyFriendlyName "include water"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	bool m_bIncludeWater; // 0x504	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x505	
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x506	
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x507	
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x3]; // 0x509
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x50c	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x510	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	int32_t m_nIgnoreCP; // 0x514	
};

