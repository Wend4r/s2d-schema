#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixOscDesc_t
{
public:
	// MPropertyFriendlyName "Type"
	VMixLFOShape_t oscType; // 0x0	
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyAttributeRange "0.1 16000"
	float m_freq; // 0x4	
	// MPropertyFriendlyName "Phase (degrees)"
	// MPropertyAttributeRange "0 360"
	float m_flPhase; // 0x8	
};

