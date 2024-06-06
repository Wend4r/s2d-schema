#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Decaying Sine Wave Container"
// MPropertyDescription "Only text params, renders in real time"
class CVoiceContainerDecayingSineWave : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flFrequency; // 0xf0	
	// MPropertyFriendlyName "Decay Time (Seconds)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flDecayTime; // 0xf4	
};

