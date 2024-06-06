#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Filter Audio Node"
// MPropertyDescription "Resonant filter with adjustable slope. NOTE: This is a clean filter, not an analog model with distortion."
class CMixFilter : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Filter Type"
	// MPropertyAttributeChoiceName "filter_type"
	CUtlString m_filterType; // 0x20	
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x28	
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x2c	
	// MPropertyFriendlyName "Q"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0x30	
	// MPropertyFriendlyName "Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbGain; // 0x34	
	// MPropertyFriendlyName "Filter slope"
	VMixFilterSlope_t m_nFilterSlope; // 0x38	
};

