#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "End Cap Settings"
// MPropertyDescription "Specifies that this is a special part that should be used at the start or end of the line."
class CSmartPropSelectionCriteria_EndCap : public CSmartPropSelectionCriteria
{
public:
	// MPropertyDescription "Is this an element which should be placed at the start of the line."
	CSmartPropAttributeBool m_bStart; // 0x48	
	// MPropertyDescription "Is this an element which should be placed at the end of the line."
	CSmartPropAttributeBool m_bEnd; // 0x88	
};

