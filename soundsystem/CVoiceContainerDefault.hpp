#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Default Container"
// MPropertyDescription "Voice Container Default"
class CVoiceContainerDefault : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Vsnd"
	// MPropertyDescription "Load the audio content into the kv3 content"
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_vsndReference; // 0xf0	
};

