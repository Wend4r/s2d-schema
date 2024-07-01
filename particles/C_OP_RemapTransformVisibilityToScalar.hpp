#pragma once

#include <cstdint>

struct CParticleTransformInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x22c	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x230	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x234	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x238	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x23c	
};

