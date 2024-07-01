#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarSpline : public CParticleFunctionOperator
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
	// MPropertyFriendlyName "bias"
	float m_flBias; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x2c]; // 0x1d4
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x204	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x205	
};

