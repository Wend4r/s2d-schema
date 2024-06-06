#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save State"
// MPropertyDescription "Save the current state, allowing it to be restored at a later state."
// MVDataNodeTintColor
// MVDataClassGroup
class CSmartPropOperation_SaveState : public CSmartPropOperation
{
public:
	// MPropertyAttributeEditor "SmartPropItemNameEditor( SavedState )"
	// MPropertyDescription "Name to assign to the saved state, the save state can be restored later using this name."
	CUtlString m_StateName; // 0x50	
};

