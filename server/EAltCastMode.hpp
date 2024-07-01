#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EAltCastMode : uint32_t
{
	EAltCast_PressAndHold = 0x0,
	EAltCast_DoubleTap = 0x1,
	EAltCast_ModifierKey = 0x2,
	EAltCast_SelectThenAltCastKey = 0x3,
	EAltCastMaxValue = 0x3,
};

