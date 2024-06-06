#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blender"
// MPropertyDescription "Blends two containers."
class CVoiceContainerBlender : public CVoiceContainerBase
{
public:
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_firstSound; // 0xf0	
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_secondSound; // 0xf8	
	float m_flBlendFactor; // 0x100	
};

