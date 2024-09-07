#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EViscousChargedGunState : uint32_t
{
	EViscousChargedGunState_Idle = 0x0,
	EViscousChargedGunState_Charging = 0x1,
	EViscousChargedGunState_Shoot = 0x2,
};

