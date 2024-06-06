#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "CP to point towards"
	int32_t m_nInputCP; // 0x1c0	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x1c4	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1c8	
	// MPropertyFriendlyName "2D Orient"
	bool m_b2DOrientation; // 0x320	
	// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
	bool m_bAvoidSingularity; // 0x321	
	// MPropertyFriendlyName "Point Away"
	bool m_bPointAway; // 0x322	
};

