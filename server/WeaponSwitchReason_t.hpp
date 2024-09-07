#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class WeaponSwitchReason_t : uint32_t
{
	eDrawn = 0x0,
	eEquipped = 0x1,
	eUserInitiatedSwitchToLast = 0x2,
};

