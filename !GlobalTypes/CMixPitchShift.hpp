#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Pitch Shift Audio Node"
// MPropertyDescription "Adjust the pitch of an audio track.  This happens in real-time so the timing of the track is unaffected.  Generally the time domain processor will produce better results for small shifts downward.  For shifting upward it will alias where the frequency space shifter will apply anti-aliasing."
class CMixPitchShift : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Pitch Scale"
	// MPropertyAttributeRange "0.2 4.0"
	float m_flPitchScale; // 0x24	
	// MPropertyFriendlyName "Grain Size (ms)"
	// MPropertyAttributeRange "1 100"
	float m_flGrainMs; // 0x28	
	// MPropertyFriendlyName "Type 0=time domain, 1 = freq domain"
	// MPropertyAttributeRange "0 1"
	int32_t m_nProcType; // 0x2c	
	// MPropertyFriendlyName "Quality level 1..4"
	// MPropertyAttributeRange "1 4"
	int32_t m_nQuality; // 0x30	
};

