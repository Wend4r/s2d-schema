#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "FM Synth Container"
// MPropertyDescription "Real time FM Synthesis"
class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flCarrierFrequency; // 0xf0	
	// MPropertyFriendlyName "Mod Frequency (Hz)"
	// MPropertyDescription "The frequency of the sine tone modulating this sine tone."
	float m_flModulatorFrequency; // 0xf4	
	// MPropertyFriendlyName "Mod Amount (Hz)"
	// MPropertyDescription "The amount the modulating sine tone modulates this sine tone."
	float m_flModulatorAmount; // 0xf8	
};

