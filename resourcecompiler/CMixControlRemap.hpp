#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Remap Node"
// MPropertyDescription "Remap a control value using a clamped linear range or clamped power curve.  Allows you to stretch and clip a control signal."
class CMixControlRemap : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Input Min"
	float m_flInputMin; // 0x20	
	// MPropertyFriendlyName "Input Max"
	float m_flInputMax; // 0x24	
	// MPropertyFriendlyName "Output Start"
	float m_flOutputStart; // 0x28	
	// MPropertyFriendlyName "Output End"
	float m_flOutputEnd; // 0x2c	
	// MPropertyFriendlyName "Nonlinear power (1.0 = linear)"
	// MPropertyAttributeRange "biased 0.02 20"
	float m_flPower; // 0x30	
};

