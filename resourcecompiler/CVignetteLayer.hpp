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
	PostProcessingVignetteParameters_t m_params; // 0x28	
};

