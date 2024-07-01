#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EClientUIEvent : uint32_t
{
	EClientUIEvent_Invalid = 0x0,
	EClientUIEvent_DialogFinished = 0x1,
	EClientUIEvent_FireOutput = 0x2,
};

