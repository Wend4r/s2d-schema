#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1c8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1cc	
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x848	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xec0	
};

