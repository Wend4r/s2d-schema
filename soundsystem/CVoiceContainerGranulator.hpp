#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x1a0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Granulator Container"
class CVoiceContainerGranulator : public CVoiceContainerBase
{
public:
	float m_flGrainLength; // 0xd0	
	float m_flGrainCrossfadeAmount; // 0xd4	
	float m_flStartJitter; // 0xd8	
	float m_flPlaybackJitter; // 0xdc	
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio; // 0xe0	
};

