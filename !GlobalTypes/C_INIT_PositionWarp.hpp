#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe90
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMin; // 0x1c0	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMax; // 0x818	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0xe70	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xe74	
	// MPropertyFriendlyName "radius scale component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0xe78	
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	float m_flWarpTime; // 0xe7c	
	// MPropertyFriendlyName "warp transition start time"
	float m_flWarpStartTime; // 0xe80	
	// MPropertyFriendlyName "previous position sacale"
	float m_flPrevPosScale; // 0xe84	
	// MPropertyFriendlyName "reverse warp (0/1)"
	bool m_bInvertWarp; // 0xe88	
	// MPropertyFriendlyName "use particle count instead of time"
	bool m_bUseCount; // 0xe89	
};

