#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ScriptedMoveTo_t : uint32_t
{
	eWait = 0x0,
	eMoveWithGait = 0x3,
	eTeleport = 0x4,
	eWaitFacing = 0x5,
	// MPropertySuppressEnumerator
	eObsoleteBackCompat1 = 0x1,
	// MPropertySuppressEnumerator
	eObsoleteBackCompat2 = 0x2,
};

