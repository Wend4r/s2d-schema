#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Steam Audio Hybrid Reverb Node"
// MPropertyDescription "Applies Steam Audio Hybrid Reverb."
class CMixSteamAudioHybridReverb : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Reverb Time (RT60), Low Frequency"
	// MPropertyAttributeRange "0.1 10.0"
	float m_flReverbTimeLow; // 0x20	
	// MPropertyFriendlyName "Reverb Time (RT60), Mid Frequency"
	// MPropertyAttributeRange "0.1 10.0"
	float m_flReverbTimeMid; // 0x24	
	// MPropertyFriendlyName "Reverb Time (RT60), High Frequency"
	// MPropertyAttributeRange "0.1 10.0"
	float m_flReverbTimeHigh; // 0x28	
	// MPropertyFriendlyName "EQ, Low Frequency (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flEQLow; // 0x2c	
	// MPropertyFriendlyName "EQ, Mid Frequency (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flEQMid; // 0x30	
	// MPropertyFriendlyName "EQ, High Frequency (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flEQHigh; // 0x34	
	// MPropertyFriendlyName "Delay (seconds)"
	// MPropertyAttributeRange "0.0 5.0"
	float m_flDelay; // 0x38	
};

