#pragma once

#include <cstdint>

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x80
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PostProcessingBloomParameters_t
{
public:
	BloomBlendMode_t m_blendMode; // 0x0	
	float m_flBloomStrength; // 0x4	
	float m_flScreenBloomStrength; // 0x8	
	float m_flBlurBloomStrength; // 0xc	
	float m_flBloomThreshold; // 0x10	
	float m_flBloomThresholdWidth; // 0x14	
	float m_flSkyboxBloomStrength; // 0x18	
	float m_flBloomStartValue; // 0x1c	
	float m_flComputeBloomStrength; // 0x20	
	float m_flComputeBloomThreshold; // 0x24	
	float m_flComputeBloomLensDirtStrength; // 0x28	
	float m_flComputeBloomLensDirtBlackLevel; // 0x2c	
	float m_flBlurWeight[5]; // 0x30	
	Vector m_vBlurTint[5]; // 0x44	
};

