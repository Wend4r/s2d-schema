#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Vocoder Audio Node"
// MPropertyDescription "Applies multi-band modulation to a carrier signal, based on the multi-band envelope of a modulator signal.  Modulation bands can be configured to a certain number of bands or range of frequencies."
class CMixVocoder : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Vocoder Band Count"
	int32_t m_nBandCount; // 0x20	
	// MPropertyFriendlyName "Bandwidth"
	// MPropertyAttributeRange "0.1 3.0"
	float m_flBandwidth; // 0x24	
	// MPropertyFriendlyName "dB gain for modulation signal"
	// MPropertyAttributeRange "-12 12"
	float m_fldBModGain; // 0x28	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTime; // 0x2c	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTime; // 0x30	
	// MPropertyFriendlyName "Frequency Start"
	// MPropertyAttributeRange "0 11025"
	float m_flFreqRangeStart; // 0x34	
	// MPropertyFriendlyName "Frequency End"
	// MPropertyAttributeRange "100 22050"
	float m_flFreqRangeEnd; // 0x38	
	// MPropertyFriendlyName "Gain of Unvoiced"
	// MPropertyAttributeRange "-12 12"
	float m_fldBUnvoicedGain; // 0x3c	
	int32_t m_nDebugBand; // 0x40	
	bool m_bPeakMode; // 0x44	
};

