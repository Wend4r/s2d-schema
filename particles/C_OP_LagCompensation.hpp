#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	int32_t m_nDesiredVelocityCP; // 0x1c0	
	// MPropertyFriendlyName "latency CP"
	int32_t m_nLatencyCP; // 0x1c4	
	// MPropertyFriendlyName "latency CP field"
	int32_t m_nLatencyCPField; // 0x1c8	
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	int32_t m_nDesiredVelocityCPField; // 0x1cc	
};

