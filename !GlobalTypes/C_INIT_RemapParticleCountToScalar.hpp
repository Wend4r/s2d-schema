#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1c8	
	// MPropertyFriendlyName "input scale control point"
	int32_t m_nScaleControlPoint; // 0x1cc	
	// MPropertyFriendlyName "input scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1dc	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1e0	
	// MPropertyFriendlyName "invert input from total particle count"
	bool m_bInvert; // 0x1e1	
	// MPropertyFriendlyName "wrap input"
	bool m_bWrap; // 0x1e2	
private:
	[[maybe_unused]] uint8_t __pad01e3[0x1]; // 0x1e3
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1e4	
};

