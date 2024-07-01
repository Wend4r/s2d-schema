#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class PulseMethodCallMode_t : uint32_t
{
	// MPropertyFriendlyName "Wait For Completion"
	// MPropertyDescription "Synchronous - wait for the method to fully complete before returning"
	SYNC_WAIT_FOR_COMPLETION = 0x0,
	// MPropertyFriendlyName "Fire And Forget"
	// MPropertyDescription "Asynchronous - returns and continues despite the called method yielding"
	ASYNC_FIRE_AND_FORGET = 0x1,
};

