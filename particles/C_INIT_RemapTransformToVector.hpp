#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMax; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f8	
	// MPropertyFriendlyName "local space transform"
	// MParticleInputOptional
	CParticleTransformInput m_LocalSpaceTransform; // 0x260	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x2c8	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x2cc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2d0	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x2d4	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x2d5	
private:
	[[maybe_unused]] uint8_t __pad02d6[0x2]; // 0x2d6
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x2d8	
};

