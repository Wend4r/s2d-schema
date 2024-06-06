#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Choice"
// MVDataAnonymousNode
// MVDataOutlinerNameExpr
class CSmartPropChoice : public CSmartPropParameter
{
public:
	// MPropertyFriendlyName "Choice Name"
	CUtlString m_Name; // 0x10	
	// MPropertyAttributeChoiceName "smartprop_choice_options"
	CUtlString m_DefaultOption; // 0x18	
	// MPropertyAutoExpandSelf
	CUtlVector< CSmartPropChoiceOption > m_Options; // 0x20	
};

