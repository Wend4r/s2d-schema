#pragma once

#include <cstdint>

struct PostProcessingTonemapParameters_t;
struct PostProcessingBloomParameters_t;
struct PostProcessingVignetteParameters_t;
struct PostProcessingLocalContrastParameters_t;
// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x118
// 
// MGetKV3ClassDefaults
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0	
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4	
	bool m_bHasBloomParams; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	PostProcessingBloomParameters_t m_bloomParams; // 0x44	
	bool m_bHasVignetteParams; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	PostProcessingVignetteParameters_t m_vignetteParams; // 0xb8	
	bool m_bHasLocalContrastParams; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00dd[0x3]; // 0xdd
public:
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xe0	
	int32_t m_nColorCorrectionVolumeDim; // 0xf4	
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xf8	
	bool m_bHasColorCorrection; // 0x110	
};

