#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix VSND Input Node"
// MPropertyDescription "Create a variable that can contain the name of a vsnd file that can be modified by code/operator stack.  This can be used to select the IR for a convolution node."
class CMixVsndName : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	// MPropertyAttributeEditor "AssetBrowse( vsnd )"
	CUtlString m_defaultValue; // 0x20	
};

