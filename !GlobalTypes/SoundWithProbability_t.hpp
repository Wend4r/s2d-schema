#pragma once

#include <cstdint>

struct CSoundContainerReference;
// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct SoundWithProbability_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Vsnd"
	CSoundContainerReference m_sound; // 0x8	
	// MPropertyFriendlyName "Weight"
	float m_fProbabilityWeight; // 0x20	
};

