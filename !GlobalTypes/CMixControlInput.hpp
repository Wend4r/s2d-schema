#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Input Node"
// MPropertyDescription "Define a control variable that can be set by code or an operator stack."
class CMixControlInput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_flDefaultValue; // 0x20	
	// MPropertyFriendlyName "Preview Min Range"
	float m_flMinRange; // 0x24	
	// MPropertyFriendlyName "Preview Max Range"
	float m_flMaxRange; // 0x28	
	// MPropertyFriendlyName "Convert From dB"
	bool m_bUseDecibels; // 0x2c	
};

