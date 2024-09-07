#pragma once

#include <cstdint>

struct CSoundContainerReference;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blender"
// MPropertyDescription "Blends two containers."
class CVoiceContainerBlender : public CVoiceContainerBase
{
public:
	CSoundContainerReference m_firstSound; // 0xc0	
	CSoundContainerReference m_secondSound; // 0xd8	
	float m_flBlendFactor; // 0xf0	
};

