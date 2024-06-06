#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix 3 Band Dynamics Node"
// MPropertyDescription "This is a multi-band dynamics processor.  First the signal is split into low/mid/high bands, then each band is routed through two compressors providing upward and downward compression to each band.  Input & Output gain can also be adjusted."
class CMixDynamics3Band : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-18 18"
	float m_fldbOutputGain; // 0x24	
	// MPropertyFriendlyName "Threshold detection time (ms)"
	float m_flRMSTime; // 0x28	
	// MPropertyFriendlyName "Depth [0.0 - 1.0]"
	// MPropertyAttributeRange "0 1"
	float m_flDepth; // 0x2c	
	// MPropertyFriendlyName "Wet [0.0 - 1.0]"
	// MPropertyAttributeRange "0 1"
	float m_flWetMix; // 0x30	
	// MPropertyFriendlyName "Time Scale [0.0 - 10.0]"
	// MPropertyAttributeRange "0 10"
	float m_flTimeScale; // 0x34	
	// MPropertyFriendlyName "Knee width (dB) 0 = hard knee"
	float m_fldbKneeWidth; // 0x38	
	// MPropertyFriendlyName "Low Cutoff Freq (Hz)"
	float m_flLowCutoffFreq; // 0x3c	
	// MPropertyFriendlyName "High Cutoff Freq (Hz)"
	float m_flHighCutoffFreq; // 0x40	
	// MPropertyFriendlyName "Peak Mode"
	bool m_bPeakMode; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MPropertyHideField
	int32_t m_nSelectedPage; // 0x48	
	VMixDynamicsBand_t m_bands[3]; // 0x4c	
};

