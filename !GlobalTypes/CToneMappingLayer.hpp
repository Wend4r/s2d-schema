#pragma once

#include <cstdint>

struct PostProcessingTonemapParameters_t;
// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
class CToneMappingLayer : public CColorCorrectionLayer
{
public:
	PostProcessingTonemapParameters_t m_params; // 0x28	
	bool m_bUseLocalTonemapOperator; // 0x64	
};

