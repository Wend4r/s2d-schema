#pragma once

#include <cstdint>

struct CSmartPropAttributeChoiceSelectionMode;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tint Color Gradient"
// MPropertyDescription "Set the color tint to a selection from within the defined gradient."
// MVDataClassGroup
class CSmartPropOperation_RandomColorTintColor : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Selection Mode"
	// MPropertyDescription "Specifies how the color is to be selected from the authored set of choices"
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x50	
	// MPropertyFriendlyName "Color Position"
	// MPropertyDescription "[ 0, 1 ] Value specifying the location on the gradient to pick the color from."
	// MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeFloat m_ColorPosition; // 0x90	
	// MPropertyFriendlyName "Application Mode"
	// MPropertyDescription "Specifies how the selected color should be applied to the current color."
	ApplyColorMode_t m_Mode; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	// MPropertyDescription "Defines a color gradient from which a random color will be piked."
	CColorGradient m_Gradient; // 0xd8	
};

