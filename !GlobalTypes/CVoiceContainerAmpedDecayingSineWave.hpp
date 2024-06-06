#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Amped Decaying Sine Wave Container"
// MPropertyDescription "Bytecode instruction"
class CVoiceContainerAmpedDecayingSineWave : public CVoiceContainerDecayingSineWave
{
public:
	// MPropertyFriendlyName "Attenuation Amount (dB)"
	// MPropertyDescription "The amount of attenuation ."
	float m_flGainAmount; // 0xf8	
};

