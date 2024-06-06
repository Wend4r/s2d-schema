#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Dynamics Audio Node"
// MPropertyDescription "A dynamics multiprocessor.  This is a single unit that switches between being a noise gate, compressor, or limiter as the signal moves through its dynamic range.  Useful in some specific cases, e.g. gate+compress or gate+limit usually.  Other cases may be more suited to using multiple compressors in series."
class CMixDynamics : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Noise Gate Threshold(dB)"
	float m_fldbNoiseGateThreshold; // 0x24	
	// MPropertyFriendlyName "Gain (dB)"
	float m_fldbGain; // 0x28	
	// MPropertyFriendlyName "Compression Threshold(dB)"
	float m_fldbCompressionThreshold; // 0x2c	
	// MPropertyFriendlyName "Limiter Threshold(dB)"
	float m_fldbLimiterThreshold; // 0x30	
	// MPropertyFriendlyName "Knee width (dB) 0 = hard knee"
	float m_fldbKneeWidth; // 0x34	
	// MPropertyFriendlyName "Compression Ratio"
	float m_flRatio; // 0x38	
	// MPropertyFriendlyName "Limiter Ratio"
	float m_flLimiterRatio; // 0x3c	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTime; // 0x40	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTime; // 0x44	
	// MPropertyFriendlyName "Threshold detection time (ms)"
	float m_flRMSTime; // 0x48	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x4c	
	// MPropertyFriendlyName "Peak Mode"
	bool m_bPeakMode; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	int32_t m_nUIPage; // 0x54	
};

