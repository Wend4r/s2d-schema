#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x268
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "interpolation rate"
	float m_flInterpRate; // 0x1b8	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x1bc	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x1c0	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1c4	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1c8	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x248	
	// MPropertyFriendlyName "CP to trace from"
	int32_t m_nInputCP; // 0x24c	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x250	
private:
	[[maybe_unused]] uint8_t __pad0254[0xc]; // 0x254
public:
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x260	
};

