#pragma once

#include <cstdint>

struct CSoundContainerReferenceArray;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x138
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Selector"
// MPropertyDescription "Plays a selected vsnd on playback."
class CVoiceContainerSelector : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Playback Mode"
	PlayBackMode_t m_mode; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
public:
	// MPropertyFriendlyName "Sounds To play"
	// -> m_bUseReference - 0xc8
	// -> m_sounds - 0xd0
	// -> m_pSounds - 0xe8
	CSoundContainerReferenceArray m_soundsToPlay; // 0xc8	
	// MPropertyFriendlyName "Relative Weights"
	CUtlVector< float32 > m_fProbabilityWeights; // 0x100	
};

