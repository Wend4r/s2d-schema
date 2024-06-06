#pragma once

#include <cstdint>

struct CSmartPropAttributeApplyColorMode;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tint Color Choice"
// MPropertyDescription "Set the color tint to one color out of a pre-selected set of colors."
// MVDataClassGroup
class CSmartPropOperation_SetTintColor : public CSmartPropOperation
{
public:
	// MPropertyDescription "Specifies how the selected color should be applied."
	CSmartPropAttributeApplyColorMode m_Mode; // 0x50	
	// MPropertyDescription "List of possible colors which may be selected"
	CUtlVector< ColorChoice_t > m_ColorChoices; // 0x90	
};

