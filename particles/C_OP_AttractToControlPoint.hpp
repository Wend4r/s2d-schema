#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "component scale"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "amount of force (or Max Force)"
	CPerParticleFloatInput m_fForceAmount; // 0x1d8	
	// MPropertyFriendlyName "falloff power"
	float m_fFalloffPower; // 0x330	
private:
	[[maybe_unused]] uint8_t __pad0334[0x4]; // 0x334
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0x338	
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x3a0	
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x4f8	
};

