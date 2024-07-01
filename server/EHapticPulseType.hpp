#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EHapticPulseType : uint32_t
{
	VR_HAND_HAPTIC_PULSE_LIGHT = 0x0,
	VR_HAND_HAPTIC_PULSE_MEDIUM = 0x1,
	VR_HAND_HAPTIC_PULSE_STRONG = 0x2,
};

