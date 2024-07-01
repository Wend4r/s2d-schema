#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Selector"
// MPropertyDescription "Plays a selected vsnd on playback."
class CVoiceContainerSelector : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Playback Mode"
	PlayBackMode_t m_mode; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	// MPropertyFriendlyName "Sounds To play"
	CUtlVector< SoundWithProbability_t > m_soundsToPlay; // 0xd8	
};

