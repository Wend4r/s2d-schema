#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x1b8	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x1bc	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
	// MPropertyFriendlyName "use particle velocity for first input"
	bool m_bUseParticleVelocity; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d8	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1dc	
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x1dd	
};

