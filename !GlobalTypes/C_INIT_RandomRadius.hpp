#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius min"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x1c0	
	// MPropertyFriendlyName "radius max"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x1c4	
	// MPropertyFriendlyName "radius random exponent"
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x1c8	
};

