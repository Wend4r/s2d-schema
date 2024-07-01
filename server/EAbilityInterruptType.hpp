#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EAbilityInterruptType : uint32_t
{
	EAbilityInterruptNone = 0x0,
	EAbilityInterruptCancel = 0x1,
	EAbilityInterruptExternal = 0x2,
};

