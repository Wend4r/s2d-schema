#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x888
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity"
	CParticleCollectionVecInput m_velocityInput; // 0x1c0	
	// MPropertyFriendlyName "local space"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x818	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x880	
	// MPropertyFriendlyName "direction only"
	bool m_bDirectionOnly; // 0x884	
};

