#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1b8	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1bc	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x2c]; // 0x1c4
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x1f4	
};

