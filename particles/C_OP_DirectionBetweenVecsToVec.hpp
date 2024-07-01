#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe70
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1c0	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x818	
};

