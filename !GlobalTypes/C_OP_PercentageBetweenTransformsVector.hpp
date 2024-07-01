#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1bc	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c0	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1c4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1e0	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x248	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b0	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2b4	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2b5	
};

