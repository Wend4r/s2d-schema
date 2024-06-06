#pragma once

#include <cstdint>

struct PostProcessingVignetteParameters_t;
// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CVignetteLayer : public CColorCorrectionLayer
{
public:
	// -> m_flVignetteStrength - 0x28
	// -> m_vCenter - 0x2c
	// -> m_flRadius - 0x34
	// -> m_flRoundness - 0x38
	// -> m_flFeather - 0x3c
	// -> m_vColorTint - 0x40
	PostProcessingVignetteParameters_t m_params; // 0x28	
};

