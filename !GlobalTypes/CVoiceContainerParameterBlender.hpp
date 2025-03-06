#pragma once

#include <cstdint>

struct CSoundContainerReference;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Parameter Blender"
// MPropertyDescription "Blends two containers according to parameter curves."
class CVoiceContainerParameterBlender : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "First Sound"
	CSoundContainerReference m_firstSound; // 0xc0	
	// MPropertyFriendlyName "Second Sound"
	CSoundContainerReference m_secondSound; // 0xd8	
	// MPropertyStartGroup "Occlusion"
	// MPropertyFriendlyName "Enable Occlusion Blend"
	bool m_bEnableOcclusionBlend; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f1[0x7]; // 0xf1
public:
	// MPropertySuppressExpr "m_bEnableOcclusionBlend == false"
	// MPropertyFriendlyName "First Curve"
	CPiecewiseCurve m_curve1; // 0xf8	
	// MPropertySuppressExpr "m_bEnableOcclusionBlend == false"
	// MPropertyFriendlyName "Second Curve"
	CPiecewiseCurve m_curve2; // 0x138	
	// MPropertyStartGroup "Distance"
	// MPropertyFriendlyName "Enable Distance Blend"
	bool m_bEnableDistanceBlend; // 0x178	
private:
	[[maybe_unused]] uint8_t __pad0179[0x7]; // 0x179
public:
	// MPropertySuppressExpr "m_bEnableDistanceBlend == false"
	// MPropertyFriendlyName "First Curve"
	CPiecewiseCurve m_curve3; // 0x180	
	// MPropertySuppressExpr "m_bEnableDistanceBlend == false"
	// MPropertyFriendlyName "Second Curve"
	CPiecewiseCurve m_curve4; // 0x1c0	
};

