#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1c8	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x840	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x9a0	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalCP; // 0x9a4	
};

