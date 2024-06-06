#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x130
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Selector"
// MPropertyDescription "Plays a selected vsnd on playback."
class CVoiceContainerSelector : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Playback Mode"
	PlayBackMode_t m_mode; // 0xf0	
	// MPropertyFriendlyName "Retrigger"
	bool m_bRetrigger; // 0xf4	
private:
	[[maybe_unused]] uint8_t __pad00f5[0x3]; // 0xf5
public:
	// MPropertyFriendlyName "Sounds To play"
	CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_soundsToPlay; // 0xf8	
};

