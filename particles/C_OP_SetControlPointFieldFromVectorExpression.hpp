#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleRemapFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1028
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vecInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vecInput2; // 0x848	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xec0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1020	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x1024	
};

