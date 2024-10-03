#pragma once

#include <cstdint>

struct CParticleTransformInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x1c8	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x1cc	
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1d0	
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x238	
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x398	
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x4f8	
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x658	
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x7b8	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x7b9	
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x7ba	
};

