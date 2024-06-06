#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "Is Valid"
// MPropertyDescription "Specifies if this element is currently valid choice."
class CSmartPropSelectionCriteria_IsValid : public CSmartPropSelectionCriteria
{
public:
	// MPropertyFriendlyName "Valid When"
	// MPropertyDescription "Expression to evaluate to determine if this choice is currently valid."
	// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression; // 0x48	
};

