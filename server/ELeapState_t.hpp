#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class ELeapState_t : uint8_t
{
	ELeapState_None = 0x0,
	ELeapState_Startup = 0x1,
	ELeapState_BoostingUp = 0x2,
	ELeapState_CrashingDown = 0x3,
	ELeapState_Land = 0x4,
};

