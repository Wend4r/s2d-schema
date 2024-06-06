#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CFilterStage
{
public:
	// MPropertyFriendlyName "Filter Type"
	// MPropertyAttributeChoiceName "filter_type"
	CUtlString m_filterType; // 0x0	
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x8	
	// MPropertyFriendlyName "Q"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0xc	
	// MPropertyFriendlyName "Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbGain; // 0x10	
	// MPropertyFriendlyName "Slope"
	VMixFilterSlope_t m_nFilterSlope; // 0x14	
	// MPropertyFriendlyName "Enabled"
	bool m_bEnable; // 0x15	
};

