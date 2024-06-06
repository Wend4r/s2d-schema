#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Variable Value"
// MPropertyDescription "Compares the current value of a variable to the specified value. If the comparison is false the element evaluation is stopped."
// MVDataClassGroup
class CSmartPropFilter_VariableValue : public CSmartPropFilter
{
public:
	CSmartPropVariableComparison m_VariableComparison; // 0x50	
};

