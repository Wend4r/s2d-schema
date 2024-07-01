#pragma once

#include <cstdint>

struct CParticleVariableRef;
struct CParticleTransformInput;
struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa30
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVariable : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Variable"
	// -> m_variableName - 0x1c0
	// -> m_variableType - 0x1f8
	CParticleVariableRef m_variableReference; // 0x1c0	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	CParticleTransformInput m_transformInput; // 0x200	
	// MPropertyFriendlyName "Position Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	Vector m_positionOffset; // 0x268	
	// MPropertyFriendlyName "Rotation Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	QAngle m_rotationOffset; // 0x274	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_VEC3"
	CParticleCollectionVecInput m_vecInput; // 0x280	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_FLOAT"
	CParticleCollectionFloatInput m_floatInput; // 0x8d8	
};

