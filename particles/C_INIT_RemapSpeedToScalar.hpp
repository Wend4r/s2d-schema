#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	int32_t m_nControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1d0	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1d4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1dc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e8	
	// MPropertyFriendlyName "per particle"
	bool m_bPerParticle; // 0x1ec	
};

