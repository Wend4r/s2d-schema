#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Stereo Delay Audio Node"
// MPropertyDescription "A simple delay with separate left & right delay times."
class CMixStereoDelay : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Left Channel Delay (in seconds)"
	// MPropertyAttributeRange "0 100"
	float m_flDelayLeft; // 0x20	
	// MPropertyFriendlyName "Right Channel Delay (in seconds)"
	// MPropertyAttributeRange "0 100"
	float m_flDelayRight; // 0x24	
};

