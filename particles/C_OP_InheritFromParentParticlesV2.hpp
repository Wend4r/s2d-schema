#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MParticleMinVersion
// MGetKV3ClassDefaults
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1b8	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c0	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1c4	
private:
	[[maybe_unused]] uint8_t __pad01c5[0x3]; // 0x1c5
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x1c8	
};

