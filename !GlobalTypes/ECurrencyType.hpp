#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ECurrencyType : uint32_t
{
	ECurrencyInvalid = 0xffffffffffffffff,
	EGold = 0x0,
	EAbilityPoints = 0x1,
	EAbilityUnlocks = 0x2,
	EDeathPenaltyGold = 0x3,
	// MPropertySuppressEnumerator
	ECurrencyCount = 0x4,
};

