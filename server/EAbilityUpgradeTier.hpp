#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class EAbilityUpgradeTier : uint8_t
{
	EAbilityUpgradeTier_Invalid = 0x0,
	EAbilityUpgradeTier_1 = 0x1,
	EAbilityUpgradeTier_2 = 0x2,
	EAbilityUpgradeTier_3 = 0x3,
	// MPropertySuppressEnumerator
	EMaxAbilityUpgradeTier = 0x4,
};

