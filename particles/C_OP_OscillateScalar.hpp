#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	float m_RateMin; // 0x1b8	
	// MPropertyFriendlyName "oscillation rate max"
	float m_RateMax; // 0x1bc	
	// MPropertyFriendlyName "oscillation frequency min"
	float m_FrequencyMin; // 0x1c0	
	// MPropertyFriendlyName "oscillation frequency max"
	float m_FrequencyMax; // 0x1c4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1cc	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1cd	
private:
	[[maybe_unused]] uint8_t __pad01ce[0x2]; // 0x1ce
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1d0	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1d4	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1d8	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1dc	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1e0	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1e4	
};

