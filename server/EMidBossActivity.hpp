#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EMidBossActivity : uint32_t
{
	IdleShielded = 0x0,
	Alert = 0x1,
	AlertShooting = 0x2,
	Dying = 0x3,
};

