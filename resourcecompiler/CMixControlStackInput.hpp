#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Stack Input Node"
// MPropertyDescription "This will copy a control value from this soundevent's operator stack.  Works with any stack/variable without modifying the stack itself."
class CMixControlStackInput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_flDefaultValue; // 0x20	
	// MPropertyFriendlyName "Preview Min Range"
	float m_flMinRange; // 0x24	
	// MPropertyFriendlyName "Preview Max Range"
	float m_flMaxRange; // 0x28	
};

