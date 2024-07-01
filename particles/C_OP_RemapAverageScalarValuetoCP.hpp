#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x1c4	
	// MPropertyFriendlyName "scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "input volume minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input volume maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
};

