#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RotateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "rotation axis min"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x1bc	
	// MPropertyFriendlyName "rotation axis max"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x1c8	
	// MPropertyFriendlyName "rotation rate min"
	float m_flRotRateMin; // 0x1d4	
	// MPropertyFriendlyName "rotation rate max"
	float m_flRotRateMax; // 0x1d8	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01dd[0x3]; // 0x1dd
public:
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x1e0	
};

