#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c4	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x24]; // 0x1cc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
};

