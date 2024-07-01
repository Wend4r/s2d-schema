#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleRemapFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x1c0	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x318	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x470	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x5c8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5cc	
};

