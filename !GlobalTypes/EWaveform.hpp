#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class EWaveform : uint8_t
{
	Sine = 0x0,
	Square = 0x1,
	Saw = 0x2,
	Triangle = 0x3,
	Noise = 0x4,
};

