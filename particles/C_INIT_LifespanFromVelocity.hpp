#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x278
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "bias distance"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1c0	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1cc	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x1d0	
	// MPropertyFriendlyName "trace recycle tolerance"
	float m_flTraceTolerance; // 0x1d4	
	// MPropertyFriendlyName "maximum points to cache"
	int32_t m_nMaxPlanes; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x1e0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0xc]; // 0x264
public:
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x270	
};

