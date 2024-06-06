#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Container Switch"
// MPropertyDescription "An array of containers"
class CVoiceContainerSwitch : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Container List"
	CUtlVector< CVoiceContainerBase* > m_soundsToPlay; // 0xf0	
};

