#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 1
// Size: 0x1
enum class UnitFilterResult : uint8_t
{
	UF_SUCCESS = 0x0,
	UF_FAIL_INVALID_LOCATION = 0x1,
	UF_FAIL_INVALID_TEAM = 0x2,
	UF_FAIL_INVALID_TYPE = 0x3,
	UF_FAIL_INVALID_ENTITY = 0x4,
	UF_FAIL_INVALID_FLAGS = 0x5,
};

