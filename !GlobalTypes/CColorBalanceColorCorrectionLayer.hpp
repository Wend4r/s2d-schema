#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CColorBalanceColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nRedCyanBalS; // 0x28	
	int32_t m_nRedCyanBalM; // 0x2c	
	int32_t m_nRedCyanBalH; // 0x30	
	int32_t m_nGreenMagentaBalS; // 0x34	
	int32_t m_nGreenMagentaBalM; // 0x38	
	int32_t m_nGreenMagentaBalH; // 0x3c	
	int32_t m_nBlueYellowBalS; // 0x40	
	int32_t m_nBlueYellowBalM; // 0x44	
	int32_t m_nBlueYellowBalH; // 0x48	
	bool m_bPreserveLuminosity; // 0x4c	
};

