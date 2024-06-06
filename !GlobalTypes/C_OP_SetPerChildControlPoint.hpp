#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x488
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1b8	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1bc	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x1c8	
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x320	
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x478	
private:
	[[maybe_unused]] uint8_t __pad0479[0x3]; // 0x479
public:
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x47c	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x480	
};

