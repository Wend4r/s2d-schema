#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Target color control point number"
	int32_t m_nColorCP; // 0x1c0	
	// MPropertyFriendlyName "Color Gem Enable control point number"
	int32_t m_nColorGemEnableCP; // 0x1c4	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputCP; // 0x1c8	
	// MPropertyFriendlyName "Default HSV Color"
	Color m_DefaultHSVColor; // 0x1cc	
};

