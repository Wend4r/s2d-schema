#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tint Color Random"
// MPropertyDescription "Set the color tint to a random selection from within the defined gradient."
// MVDataClassGroup
class CSmartPropOperation_RandomColorTintColor : public CSmartPropOperation
{
public:
	// MPropertyDescription "Specifies how the selected color should be applied."
	ApplyColorMode_t m_Mode; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyDescription "Defines a color gradient from which a random color will be piked."
	CColorGradient m_Gradient; // 0x58	
};

