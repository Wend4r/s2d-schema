#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 2
// Size: 0x2
enum class ECitadelWeaponAttributes : uint16_t
{
	// MPropertyFriendlyName "None"
	EWeaponAttribute_None = 0x0,
	// MPropertyFriendlyName "Short Range"
	EWeaponAttribute_ShortRange = 0x1,
	// MPropertyFriendlyName "Medium Range"
	EWeaponAttribute_MediumRange = 0x2,
	// MPropertyFriendlyName "Long Range"
	EWeaponAttribute_LongRange = 0x4,
	// MPropertyFriendlyName "Multi-Pellet"
	EWeaponAttribute_MultiPellet = 0x8,
	// MPropertyFriendlyName "Burst Fire"
	EWeaponAttribute_BurstFire = 0x10,
};

