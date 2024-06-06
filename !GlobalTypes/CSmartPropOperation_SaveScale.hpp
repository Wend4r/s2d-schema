#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Current Scale"
// MPropertyDescription "Save the current scale factor to a specified variable."
// MVDataClassGroup
class CSmartPropOperation_SaveScale : public CSmartPropOperation
{
public:
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_VariableName; // 0x50	
};

