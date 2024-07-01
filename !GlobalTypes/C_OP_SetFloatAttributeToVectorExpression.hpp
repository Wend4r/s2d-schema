#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CParticleRemapFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xfd0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c0	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x818	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xe70	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0xfc8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xfcc	
};

