#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0xee0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c0	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x818	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xe70	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xe74	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xe78	
};

