#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Group"
// MPropertyDescription "A group of elements that will all be evaulated."
// MVDataOutlinerLabelExpr
class CSmartPropElement_Group : public CSmartPropElement
{
public:
	// MPropertyFriendlyName "Children"
	// MPropertyDescription "List of child elements which will appear if this element appears"
	// MVDataPromoteField
	CUtlVector< CSmartPropElement* > m_Children; // 0x80	
	// MPropertyFriendlyName "Label"
	// MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
	CUtlString m_sLabel; // 0x98	
};

