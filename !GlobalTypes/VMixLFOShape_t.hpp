#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class VMixLFOShape_t : uint32_t
{
	LFO_SHAPE_SINE = 0x0,
	LFO_SHAPE_SQUARE = 0x1,
	LFO_SHAPE_TRI = 0x2,
	LFO_SHAPE_SAW = 0x3,
	LFO_SHAPE_NOISE = 0x4,
};

