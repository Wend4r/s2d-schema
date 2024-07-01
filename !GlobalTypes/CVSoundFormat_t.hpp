#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class CVSoundFormat_t : uint8_t
{
	PCM16 = 0x0,
	PCM8 = 0x1,
	MP3 = 0x2,
	ADPCM = 0x3,
};

