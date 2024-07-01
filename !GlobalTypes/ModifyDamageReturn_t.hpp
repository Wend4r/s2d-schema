#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ModifyDamageReturn_t : uint32_t
{
	CONTINUE_TO_APPLY_DAMAGE = 0x0,
	ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
};

