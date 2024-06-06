#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Panner Audio Node"
// MPropertyDescription "Adjust the stereo panning of an audio track."
class CMixPanner : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Type"
	VMixPannerType_t m_type; // 0x20	
	// MPropertyFriendlyName "Strength"
	// MPropertyAttributeRange "0 1"
	float m_flStrength; // 0x24	
};

