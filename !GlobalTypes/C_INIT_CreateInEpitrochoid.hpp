#pragma once

#include <cstdint>

struct CParticleTransformInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x798
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x1c0	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x1c4	
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x230	
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x388	
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x4e0	
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x638	
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x790	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x791	
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x792	
};

