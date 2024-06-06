#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_RateMin; // 0x1b8	
	// MPropertyFriendlyName "oscillation rate max"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "oscillation frequency min"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_FrequencyMin; // 0x1d0	
	// MPropertyFriendlyName "oscillation frequency max"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_FrequencyMax; // 0x1dc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1e8	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1ec	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1ed	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1ee	
private:
	[[maybe_unused]] uint8_t __pad01ef[0x1]; // 0x1ef
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1f0	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1f4	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1f8	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1fc	
	// MPropertyFriendlyName "oscillation multiplier"
	CPerParticleFloatInput m_flOscMult; // 0x200	
	// MPropertyFriendlyName "oscillation start phase"
	CPerParticleFloatInput m_flOscAdd; // 0x358	
	// MPropertyFriendlyName "rate scale"
	CPerParticleFloatInput m_flRateScale; // 0x4b0	
};

