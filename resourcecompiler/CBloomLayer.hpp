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
	PostProcessingBloomParameters_t m_params; // 0x28	
};

