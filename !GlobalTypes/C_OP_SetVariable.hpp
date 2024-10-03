#pragma once

#include <cstdint>

struct CParticleVariableRef;
struct CParticleTransformInput;
struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa60
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVariable : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Variable"
	// -> m_variableName - 0x1c8
	// -> m_variableType - 0x200
	CParticleVariableRef m_variableReference; // 0x1c8	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	CParticleTransformInput m_transformInput; // 0x208	
	// MPropertyFriendlyName "Position Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	Vector m_positionOffset; // 0x270	
	// MPropertyFriendlyName "Rotation Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	QAngle m_rotationOffset; // 0x27c	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_VEC3"
	CParticleCollectionVecInput m_vecInput; // 0x288	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_FLOAT"
	CParticleCollectionFloatInput m_floatInput; // 0x900	
};

