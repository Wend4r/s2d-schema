#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d4	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1d8	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1e4	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1f0	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1f4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1f8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1fc	
	// MPropertyFriendlyName "use local system"
	bool m_bLocalCoords; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x3]; // 0x201
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x204	
};

