#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1c8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1cc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1d0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d8[0x28]; // 0x1d8
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x204	
};

