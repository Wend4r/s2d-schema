#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Meter Node"
// MPropertyDescription "Allows you to monitor a control value in real-time in vmixtool."
class CMixControlMeter : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Value"
	float m_flValue; // 0x20	
};

