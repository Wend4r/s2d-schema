#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "scale size multiplier from CP"
	int32_t m_nScaleCP; // 0x1c4	
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1c8	
	// MPropertyFriendlyName "center core radius"
	float m_fRadCentCore; // 0x1cc	
	// MPropertyFriendlyName "radius multiplier"
	float m_fRadPerPoint; // 0x1d0	
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	float m_fRadPerPointTo; // 0x1d4	
	// MPropertyFriendlyName "golden angle (is 137.508)"
	float m_fpointAngle; // 0x1d8	
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	float m_fsizeOverall; // 0x1dc	
	// MPropertyFriendlyName "radius bias"
	float m_fRadBias; // 0x1e0	
	// MPropertyFriendlyName "radius min "
	float m_fMinRad; // 0x1e4	
	// MPropertyFriendlyName "distribution bias"
	float m_fDistBias; // 0x1e8	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x1ec	
	// MPropertyFriendlyName "use continuous emission"
	bool m_bUseWithContEmit; // 0x1ed	
	// MPropertyFriendlyName "scale radius from initial value"
	bool m_bUseOrigRadius; // 0x1ee	
};

