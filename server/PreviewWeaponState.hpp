#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class PreviewWeaponState : uint32_t
{
	DROPPED = 0x0,
	HOLSTERED = 0x1,
	DEPLOYED = 0x2,
	PLANTED = 0x3,
	INSPECT = 0x4,
	ICON = 0x5,
};

