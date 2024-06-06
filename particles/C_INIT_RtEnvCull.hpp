#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x268
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1c0	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1cc	
	// MPropertyFriendlyName "use velocity for test direction"
	bool m_bUseVelocity; // 0x1d8	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x1d9	
	// MPropertyFriendlyName "velocity test adjust lifespan"
	bool m_bLifeAdjust; // 0x1da	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x1db	
private:
	[[maybe_unused]] uint8_t __pad025b[0x1]; // 0x25b
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x25c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x260	
};

