#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "TESTBED: FM Synth Container"
// MPropertyDescription "Real time FM Synthesis"
class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flCarrierFrequency; // 0xd0	
	// MPropertyFriendlyName "Mod Frequency (Hz)"
	// MPropertyDescription "The frequency of the sine tone modulating this sine tone."
	float m_flModulatorFrequency; // 0xd4	
	// MPropertyFriendlyName "Mod Amount (Hz)"
	// MPropertyDescription "The amount the modulating sine tone modulates this sine tone."
	float m_flModulatorAmount; // 0xd8	
};

