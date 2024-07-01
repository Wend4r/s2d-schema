#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EQueryCvarValueStatus : uint32_t
{
	eQueryCvarValueStatus_ValueIntact = 0x0,
	eQueryCvarValueStatus_CvarNotFound = 0x1,
	eQueryCvarValueStatus_NotACvar = 0x2,
	eQueryCvarValueStatus_CvarProtected = 0x3,
};

