#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Set Variable"
// MPropertyDescription "Set the value of a variable."
// MVDataClassGroup
// MVDataOutlinerNameExpr
class CSmartPropOperation_SetVariable : public CSmartPropOperation
{
public:
	CSmartPropAttributeVariableValue m_VariableValue; // 0x50	
};

