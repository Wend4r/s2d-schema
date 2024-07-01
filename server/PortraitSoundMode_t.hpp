#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PortraitSoundMode_t : uint32_t
{
	PORTRAIT_SOUND_MODE_INVALID = 0xffffffffffffffff,
	PORTRAIT_SOUND_MODE_NO_SOUNDS = 0x0,
	PORTRAIT_SOUND_MODE_ONLY_TAUNT_SOUNDS = 0x1,
	PORTRAIT_SOUND_MODE_ALL_SOUNDS = 0x2,
};

