#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1bc	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1c4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1d0	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x238	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2a0	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2a4	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2a5	
};

