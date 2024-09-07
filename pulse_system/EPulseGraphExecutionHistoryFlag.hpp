#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class EPulseGraphExecutionHistoryFlag : uint32_t
{
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	NO_FLAGS = 0x0,
	CURSOR_ADD_TAG = 0x1,
	CURSOR_REMOVE_TAG = 0x2,
	CURSOR_RETIRED = 0x4,
	REQUIREMENT_PASS = 0x8,
	REQUIREMENT_FAIL = 0x10,
};

