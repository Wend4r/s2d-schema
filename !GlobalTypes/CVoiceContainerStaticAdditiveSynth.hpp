#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Additive Synth Container"
// MPropertyDescription "This is a static additive synth that can scale components of the synth based on how many instances are running."
class CVoiceContainerStaticAdditiveSynth : public CVoiceContainerBase
{
public:
	CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones; // 0xd0	
};

