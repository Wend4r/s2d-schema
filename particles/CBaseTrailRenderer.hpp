#pragma once

#include <cstdint>

struct CParticleCollectionRendererFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2ee0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CBaseTrailRenderer : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2c08	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x2c0c	
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x2c10	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x2c14	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2c18	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2d78	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x2ed8	
};

