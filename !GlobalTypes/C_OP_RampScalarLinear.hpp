#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1b8	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1bc	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1c0	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1c4	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1c8	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01d0[0x20]; // 0x1d0
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1f4	
};

