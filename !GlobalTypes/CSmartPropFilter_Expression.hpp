#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Expression"
// MPropertyDescription "Evaluates the specified expression, if the result of the expression is false evaluation of the element is stopped."
// MVDataClassGroup
class CSmartPropFilter_Expression : public CSmartPropFilter
{
public:
	// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression; // 0x50	
};

