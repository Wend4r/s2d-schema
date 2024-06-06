#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Freeverb Audio Node"
// MPropertyDescription "Used to create reverb effects based on a symmetrical room."
class CMixFreeverb : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Size"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flRoomSize; // 0x20	
	// MPropertyFriendlyName "Dampening Factor"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDamp; // 0x24	
	// MPropertyFriendlyName "Width"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flWidth; // 0x28	
	// MPropertyFriendlyName "Late Reflections"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flLateReflections; // 0x2c	
};

