#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ELockonState : uint32_t
{
	ELockingOn = 0x0,
	ELosingLock = 0x1,
	ELockPaused = 0x2,
	ELockNone = 0x3,
};

