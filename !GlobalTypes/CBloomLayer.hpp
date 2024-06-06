#pragma once

#include <cstdint>

struct PostProcessingBloomParameters_t;
// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
class CBloomLayer : public CColorCorrectionLayer
{
public:
	// -> m_blendMode - 0x28
	// -> m_flBloomStrength - 0x2c
	// -> m_flScreenBloomStrength - 0x30
	// -> m_flBlurBloomStrength - 0x34
	// -> m_flBloomThreshold - 0x38
	// -> m_flBloomThresholdWidth - 0x3c
	// -> m_flSkyboxBloomStrength - 0x40
	// -> m_flBloomStartValue - 0x44
	// -> m_flBlurWeight[5] - 0x48
	// -> m_vBlurTint[5] - 0x5c
	PostProcessingBloomParameters_t m_params; // 0x28	
};

