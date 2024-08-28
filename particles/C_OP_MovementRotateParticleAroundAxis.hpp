#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1c0	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x838	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x998	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xa00	
};

