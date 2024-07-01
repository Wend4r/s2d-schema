#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x478
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1b8	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x1c8	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x320	
};

