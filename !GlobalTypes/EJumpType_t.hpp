#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class EJumpType_t : uint8_t
{
	EJumpType_Ground = 0x0,
	EJumpType_Air = 0x1,
	EJumpType_Wall = 0x2,
	EJumpType_DashJump = 0x3,
};

