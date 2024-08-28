#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1e8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x250	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2bc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2bd	
};

