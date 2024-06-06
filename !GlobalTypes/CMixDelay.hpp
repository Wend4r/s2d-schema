#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Delay Audio Node"
// MPropertyDescription "Stereo delay with resonant filter on feedback."
class CMixDelay : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Delay (ms)"
	// MPropertyGroupName "+Delay"
	// MPropertyAttributeRange "0 2000"
	float m_flDelay; // 0x24	
	// MPropertyFriendlyName "DirectGain (dB)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "-24 24"
	float m_fldbDirectGain; // 0x28	
	// MPropertyFriendlyName "DelayGain (dB)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "-24 24"
	float m_fldbDelayGain; // 0x2c	
	// MPropertyFriendlyName "FeedbackGain (dB)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "-60 12"
	float m_fldbFeedbackGain; // 0x30	
	// MPropertyFriendlyName "Width"
	// MPropertyAttributeRange "0 1.0"
	float m_flWidth; // 0x34	
	// MPropertyFriendlyName "EnableFilter"
	// MPropertyGroupName "+Filter"
	bool m_bEnableFilter; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x7]; // 0x39
public:
	// MPropertyFriendlyName "Filter Type"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeChoiceName "filter_type"
	CUtlString m_filterType; // 0x40	
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x48	
	// MPropertyFriendlyName "Q"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0x4c	
	// MPropertyFriendlyName "Filter Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbGain; // 0x50	
};

