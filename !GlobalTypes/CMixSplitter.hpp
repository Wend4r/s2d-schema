#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Splitter Audio Node"
// MPropertyDescription "Create multiple copies of a track at different volumes for processing or mixing separately."
class CMixSplitter : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Volume1"
	float m_flVolume1; // 0x20	
	// MPropertyFriendlyName "Volume2"
	float m_flVolume2; // 0x24	
	// MPropertyFriendlyName "Volume3"
	float m_flVolume3; // 0x28	
	// MPropertyFriendlyName "Volume4"
	float m_flVolume4; // 0x2c	
	// MPropertyFriendlyName "Volume5"
	float m_flVolume5; // 0x30	
	// MPropertyFriendlyName "Volume6"
	float m_flVolume6; // 0x34	
	// MPropertyFriendlyName "Volume7"
	float m_flVolume7; // 0x38	
	// MPropertyFriendlyName "Volume8"
	float m_flVolume8; // 0x3c	
};

