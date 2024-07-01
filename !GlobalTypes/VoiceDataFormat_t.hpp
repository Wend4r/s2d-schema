#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class VoiceDataFormat_t : uint32_t
{
	VOICEDATA_FORMAT_STEAM = 0x0,
	VOICEDATA_FORMAT_ENGINE = 0x1,
	VOICEDATA_FORMAT_OPUS = 0x2,
};

