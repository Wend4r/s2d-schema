#pragma once

#include <cstdint>

struct CSoundContainerReference;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blender"
// MPropertyDescription "Blends two containers."
class CVoiceContainerBlender : public CVoiceContainerBase
{
public:
	CSoundContainerReference m_firstSound; // 0xb8	
	CSoundContainerReference m_secondSound; // 0xd0	
	float m_flBlendFactor; // 0xe8	
};

