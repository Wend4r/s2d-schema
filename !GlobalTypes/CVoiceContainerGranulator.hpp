#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x190
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Granulator Container"
class CVoiceContainerGranulator : public CVoiceContainerBase
{
public:
	float m_flGrainLength; // 0xc0	
	float m_flGrainCrossfadeAmount; // 0xc4	
	float m_flStartJitter; // 0xc8	
	float m_flPlaybackJitter; // 0xcc	
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio; // 0xd0	
};

