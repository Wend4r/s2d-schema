#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Current Color"
// MPropertyDescription "Save the current color tint value to a specified variable"
// MVDataClassGroup
class CSmartPropOperation_SaveColor : public CSmartPropOperation
{
public:
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Color )"
	CUtlString m_VariableName; // 0x50	
};

