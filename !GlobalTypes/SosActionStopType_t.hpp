#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SosActionStopType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_STOPTYPE_NONE = 0x0,
	// MPropertyFriendlyName "Elapsed Time"
	SOS_STOPTYPE_TIME = 0x1,
	// MPropertyFriendlyName "Opvar Float"
	SOS_STOPTYPE_OPVAR = 0x2,
};

