#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class AI_ScheduleFacingTargetPriority_t : uint8_t
{
	// MPropertyFriendlyName "Default"
	eDefault = 0x0,
	// MPropertyFriendlyName "High"
	eHigh = 0x0,
	// MPropertyFriendlyName "Task Blocking"
	eTaskBlocking = 0x1,
	// MPropertyFriendlyName "Task Blocking + Force Facing"
	eTaskBlockingForceFacing = 0x2,
};

