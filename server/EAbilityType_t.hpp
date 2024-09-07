#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 1
// Size: 0x1
enum class EAbilityType_t : uint8_t
{
	EAbilityType_Invalid = 0xffffffffffffffff,
	EAbilityType_Weapon = 0x0,
	EAbilityType_Signature = 0x1,
	EAbilityType_Ultimate = 0x2,
	EAbilityType_Item = 0x3,
	EAbilityType_Innate = 0x4,
};

