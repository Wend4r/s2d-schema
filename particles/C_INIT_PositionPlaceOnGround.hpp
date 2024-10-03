#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1c8	
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x328	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x488	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0xc]; // 0x50c
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x518	
	// MPropertyFriendlyName "include water"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	bool m_bIncludeWater; // 0x51c	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x51d	
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x51e	
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x51f	
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x3]; // 0x521
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x524	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x528	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	int32_t m_nIgnoreCP; // 0x52c	
};

