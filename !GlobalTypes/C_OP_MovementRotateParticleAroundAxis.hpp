#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1b8	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x810	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x968	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x9d0	
};

