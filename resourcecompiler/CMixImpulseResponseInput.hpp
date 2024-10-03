#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Impulse Response Node"
// MPropertyDescription "Define a control input that outputs a dynamic impulse response, which can be used by the Steam Audio hybrid reverb processor."
class CMixImpulseResponseInput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	// MPropertyAttributeEditor "AssetBrowse( vsnd )"
	CUtlString m_defaultValue; // 0x20	
};

