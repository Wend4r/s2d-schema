#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x1c0	
	// MPropertyFriendlyName "lifetime max"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x1c4	
	// MPropertyFriendlyName "lifetime random exponent"
	float m_fLifetimeRandExponent; // 0x1c8	
};

