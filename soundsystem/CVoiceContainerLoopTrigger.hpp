#pragma once

#include <cstdint>

struct CSoundContainerReference;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "LoopTrigger"
// MPropertyDescription "Continuously retriggers a sound and optionally fades to the new instance."
class CVoiceContainerLoopTrigger : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Vsnd Reference"
	CSoundContainerReference m_sound; // 0xb8	
	float m_flRetriggerTimeMin; // 0xd0	
	float m_flRetriggerTimeMax; // 0xd4	
	float m_flFadeTime; // 0xd8	
	bool m_bCrossFade; // 0xdc	
};

