#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x278
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1c0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x240	
	// MPropertyFriendlyName "minimum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x244	
	// MPropertyFriendlyName "maximum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x250	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x25c	
	// MPropertyFriendlyName "per particle world collision tests"
	bool m_bPerParticle; // 0x260	
	// MPropertyFriendlyName "offset instead of accelerate"
	bool m_bTranslate; // 0x261	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x262	
private:
	[[maybe_unused]] uint8_t __pad0263[0x1]; // 0x263
public:
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x264	
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x268	
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x269	
private:
	[[maybe_unused]] uint8_t __pad026a[0x2]; // 0x26a
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x26c	
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x270	
};

