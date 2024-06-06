#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct ControlPointReference_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start value"
	Vector m_vStartValue; // 0x1b8	
	// MPropertyFriendlyName "input field 1"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x1c4	
	// MPropertyFriendlyName "input scale 1"
	float m_flInputScale1; // 0x1c8	
	// MPropertyFriendlyName "input field 2"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x1cc	
	// MPropertyFriendlyName "input scale 2"
	float m_flInputScale2; // 0x1d0	
	// MPropertyFriendlyName "control point input 1"
	// -> m_controlPointNameString - 0x1d4
	// -> m_vOffsetFromControlPoint - 0x1d8
	// -> m_bOffsetInLocalSpace - 0x1e4
	ControlPointReference_t m_nControlPointInput1; // 0x1d4	
	// MPropertyFriendlyName "control point scale 1"
	float m_flControlPointScale1; // 0x1e8	
	// MPropertyFriendlyName "control point input 2"
	// -> m_controlPointNameString - 0x1ec
	// -> m_vOffsetFromControlPoint - 0x1f0
	// -> m_bOffsetInLocalSpace - 0x1fc
	ControlPointReference_t m_nControlPointInput2; // 0x1ec	
	// MPropertyFriendlyName "control point scale 2"
	float m_flControlPointScale2; // 0x200	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x204	
	// MPropertyFriendlyName "final per component scale"
	Vector m_vFinalOutputScale; // 0x208	
};

