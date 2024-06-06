#pragma once

#include <cstdint>

struct CSmartPropAttributeChoiceSelectionMode;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Select Single Child"
// MPropertyDescription "An element which selects a single choice from its set of child choices."
class CSmartPropElement_PickOne : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Specifies how the initial selection of a choice should be handled."
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0xa0	
	// MPropertyDescription "Should a control to select the specific choice be shown when this prop is placed in Hammer."
	CSmartPropAttributeBool m_bConfigurable; // 0xe0	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Specifies an offset in the local space of the element to apply to the configuration handle."
	CSmartPropAttributeVector m_vHandleOffset; // 0x120	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Color to use to display the configuration handle."
	CSmartPropAttributeColor m_HandleColor; // 0x160	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Size of the configuration handle."
	CSmartPropAttributeInt m_HandleSize; // 0x1a0	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Shape of the configuration handle to display."
	ConfigurationHandleShape_t m_HandleShape; // 0x1e0	
};

