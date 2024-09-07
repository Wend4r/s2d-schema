#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct MaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "particle field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nVariableField; // 0x8	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0xc	
};

