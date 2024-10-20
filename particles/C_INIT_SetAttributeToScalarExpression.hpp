#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleRemapFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetAttributeToScalarExpression : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x330	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x490	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x5f0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5f4	
};

