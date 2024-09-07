#pragma once

#include <cstdint>

struct CSoundContainerReference;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CVoiceContainerSetElement
{
public:
	CSoundContainerReference m_sound; // 0x0	
	// MPropertyFriendlyName "Volume (in Decibels)"
	float m_flVolumeDB; // 0x18	
};

