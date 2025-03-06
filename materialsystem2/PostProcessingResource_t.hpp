#pragma once

#include <cstdint>

struct PostProcessingTonemapParameters_t;
struct PostProcessingBloomParameters_t;
struct PostProcessingVignetteParameters_t;
struct PostProcessingLocalContrastParameters_t;
struct PostProcessingFogScatteringParameters_t;
// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x138
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
	bool m_bHasVignetteParams; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c5[0x3]; // 0xc5
public:
	PostProcessingVignetteParameters_t m_vignetteParams; // 0xc8	
	bool m_bHasLocalContrastParams; // 0xec	
private:
	[[maybe_unused]] uint8_t __pad00ed[0x3]; // 0xed
public:
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xf0	
	int32_t m_nColorCorrectionVolumeDim; // 0x104	
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0x108	
	bool m_bHasColorCorrection; // 0x120	
	bool m_bHasFogScatteringParams; // 0x121	
private:
	[[maybe_unused]] uint8_t __pad0122[0x2]; // 0x122
public:
	PostProcessingFogScatteringParameters_t m_fogScatteringParams; // 0x124	
};

