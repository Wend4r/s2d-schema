#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	float m_flTonemapLevel; // 0x210	
	// MPropertyFriendlyName "tonemap weight scale"
	float m_flTonemapWeight; // 0x214	
	// MPropertyFriendlyName "tonemap level"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x218	
	// MPropertyFriendlyName "tonemap weight"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x21c	
};

