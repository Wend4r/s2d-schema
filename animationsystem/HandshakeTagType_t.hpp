#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class HandshakeTagType_t : uint32_t
{
	eInvalid = 0xffffffffffffffff,
	eTask = 0x0,
	eMovement = 0x1,
	eCount = 0x2,
};

