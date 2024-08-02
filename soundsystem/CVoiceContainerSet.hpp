#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Container Set"
// MPropertyDescription "An array of containers that are played all at once."
class CVoiceContainerSet : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Container List"
	CUtlVector< CVoiceContainerSetElement > m_soundsToPlay; // 0xb8	
};

