#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x1c]; // 0x1c0
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x1dc	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x1e0	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x1e4	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x1e8	
	// MPropertyFriendlyName "tint perc"
	float m_flTintPerc; // 0x1ec	
	// MPropertyFriendlyName "tint update movement threshold"
	float m_flUpdateThreshold; // 0x1f0	
	// MPropertyFriendlyName "tint control point"
	int32_t m_nTintCP; // 0x1f4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1fc	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x200	
};

