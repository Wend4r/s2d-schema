#pragma once

#include <cstdint>

struct CSmartPropAttributeChoiceSelectionMode;
struct CSmartPropAttributeApplyColorMode;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tint Color Choice"
// MPropertyDescription "Set the color tint to one color out of a pre-selected set of colors."
// MVDataClassGroup
class CSmartPropOperation_SetTintColor : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Selection Mode"
	// MPropertyDescription "Specifies how the color is to be selected from the authored set of choices"
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x50	
	// MPropertyFriendlyName "Color Selection"
	// MPropertyDescription "Specifies the index of the color to pick"
	// MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeInt m_ColorSelection; // 0x90	
	// MPropertyFriendlyName "Application Mode"
	// MPropertyDescription "Specifies how the selected color should be applied to the current color."
	CSmartPropAttributeApplyColorMode m_Mode; // 0xd0	
	// MPropertyDescription "List of possible colors which may be selected"
	CUtlVector< ColorChoice_t > m_ColorChoices; // 0x110	
};

