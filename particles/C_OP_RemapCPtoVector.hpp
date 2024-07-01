#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1b8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x1c0	
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
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1f4	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1f8	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x1fc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x200	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x204	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x205	
};

