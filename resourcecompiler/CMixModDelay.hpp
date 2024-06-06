#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Modulating Delay Audio Node"
// MPropertyDescription "A delay with a modulated delay time."
class CMixModDelay : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Invert Phase"
	bool m_bPhaseInvert; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	// MPropertyFriendlyName "Glide Time (ms)"
	// MPropertyAttributeRange "0 2000"
	float m_flGlideTime; // 0x24	
	// MPropertyFriendlyName "Delay Time (ms)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "10 2000"
	float m_flDelay; // 0x28	
	// MPropertyFriendlyName "Feedback Gain (dB)"
	// MPropertyAttributeRange "-24 -0.6"
	float m_flFeedback; // 0x2c	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flGain; // 0x30	
	// MPropertyFriendlyName "Modulation Rate (Hz)"
	// MPropertyAttributeRange "0 20"
	float m_flModRate; // 0x34	
	// MPropertyFriendlyName "Modulation Depth (linear)"
	// MPropertyAttributeRange "0 1.0"
	float m_flModDepth; // 0x38	
	// MPropertyFriendlyName "Filter Type"
	// MPropertyGroupName "Filter"
	VMixFilterType_t m_filterType; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003e[0x2]; // 0x3e
public:
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x40	
	// MPropertyFriendlyName "Q"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0x44	
	// MPropertyFriendlyName "Filter Gain (dB)"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "-24 24"
	float m_flFilterGain; // 0x48	
	// MPropertyFriendlyName "Apply Antialiasing"
	bool m_bAntialiasing; // 0x4c	
};

