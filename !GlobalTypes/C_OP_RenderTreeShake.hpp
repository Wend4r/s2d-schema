#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "peak strength"
	float m_flPeakStrength; // 0x208	
	// MPropertyFriendlyName "peak strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x20c	
	// MPropertyFriendlyName "radius"
	float m_flRadius; // 0x210	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x214	
	// MPropertyFriendlyName "shake duration after end"
	float m_flShakeDuration; // 0x218	
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	float m_flTransitionTime; // 0x21c	
	// MPropertyFriendlyName "Twist amount (-1..1)"
	float m_flTwistAmount; // 0x220	
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	float m_flRadialAmount; // 0x224	
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	float m_flControlPointOrientationAmount; // 0x228	
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	int32_t m_nControlPointForLinearDirection; // 0x22c	
};

