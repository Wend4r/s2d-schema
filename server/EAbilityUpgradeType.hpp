#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EAbilityUpgradeType : uint32_t
{
	// MPropertyFriendlyName "Add to value"
	EAddToBase = 0x0,
	// MPropertyFriendlyName "Multiply value"
	EMultiplyBase = 0x1,
	// MPropertyFriendlyName "Add to scaling"
	EAddToScale = 0x2,
	// MPropertyFriendlyName "Multiply scaling"
	EMultiplyScale = 0x3,
	// MPropertySuppressEnumerator
	EAbilityUpgradeTypeCount = 0x4,
};

