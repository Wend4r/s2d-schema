#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Audio Meter Node"
// MPropertyDescription "This lets you meter an audio signal in vmixtool."
class CMixAudioMeter : public CMixPropertyBase
{
public:
	float m_flLeftLevel; // 0x20	
	float m_flLeftPeak; // 0x24	
	float m_flRightLevel; // 0x28	
	float m_flRightPeak; // 0x2c	
};

