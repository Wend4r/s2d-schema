#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1cc	
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x1d0	
	// MPropertyFriendlyName "transform to offset positions from"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x848	
};

