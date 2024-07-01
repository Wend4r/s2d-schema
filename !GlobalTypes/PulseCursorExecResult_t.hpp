#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PulseCursorExecResult_t : uint32_t
{
	Succeeded = 0x0,
	Canceled = 0x1,
	Failed = 0x2,
	OngoingNotify = 0x3,
};

