#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleRemapFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xfd8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vecInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vecInput2; // 0x820	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xe78	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0xfd0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xfd4	
};

