#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Output Node"
// MPropertyDescription "Save the results of a control value (e.g. envelope level) so that code/stack can query it by name."
class CMixControlOutput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_flDefaultValue; // 0x20	
};

