#pragma once

#include <cstdint>

struct CSoundContainerReference;
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
	CSoundContainerReference m_firstSound; // 0xd0	
	CSoundContainerReference m_secondSound; // 0xe8	
	float m_flBlendFactor; // 0x100	
};

