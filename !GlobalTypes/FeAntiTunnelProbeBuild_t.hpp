#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct FeAntiTunnelProbeBuild_t
{
public:
	float flWeight; // 0x0	
	float flActivationDistance; // 0x4	
	float flBias; // 0x8	
	float flCurvature; // 0xc	
	uint32_t nFlags; // 0x10	
	uint16_t nProbeNode; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0016[0x2]; // 0x16
public:
	CUtlVector< uint16 > targetNodes; // 0x18	
};

