#pragma once

#include <cstdint>

struct PostProcessingLocalContrastParameters_t;
// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CLocalContrastLayer : public CColorCorrectionLayer
{
public:
	PostProcessingLocalContrastParameters_t m_params; // 0x28	
};

