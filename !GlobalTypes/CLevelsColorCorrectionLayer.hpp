#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
class CLevelsColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nInputBlackPointRGB; // 0x28	
	int32_t m_nInputBlackPointR; // 0x2c	
	int32_t m_nInputBlackPointG; // 0x30	
	int32_t m_nInputBlackPointB; // 0x34	
	int32_t m_nInputWhitePointRGB; // 0x38	
	int32_t m_nInputWhitePointR; // 0x3c	
	int32_t m_nInputWhitePointG; // 0x40	
	int32_t m_nInputWhitePointB; // 0x44	
	int32_t m_nOutputBlackPointRGB; // 0x48	
	int32_t m_nOutputBlackPointR; // 0x4c	
	int32_t m_nOutputBlackPointG; // 0x50	
	int32_t m_nOutputBlackPointB; // 0x54	
	int32_t m_nOutputWhitePointRGB; // 0x58	
	int32_t m_nOutputWhitePointR; // 0x5c	
	int32_t m_nOutputWhitePointG; // 0x60	
	int32_t m_nOutputWhitePointB; // 0x64	
	float m_flGammaRGB; // 0x68	
	float m_flGammaR; // 0x6c	
	float m_flGammaG; // 0x70	
	float m_flGammaB; // 0x74	
};

