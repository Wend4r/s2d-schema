#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "rotation initial"
	float m_flDegrees; // 0x1cc	
	// MPropertyFriendlyName "rotation offset from initial min"
	float m_flDegreesMin; // 0x1d0	
	// MPropertyFriendlyName "rotation offset from initial max"
	float m_flDegreesMax; // 0x1d4	
	// MPropertyFriendlyName "rotation offset exponent"
	float m_flRotationRandExponent; // 0x1d8	
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x1dc	
};

