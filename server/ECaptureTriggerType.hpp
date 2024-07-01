#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ECaptureTriggerType : uint32_t
{
	ENoEffect = 0x0,
	EAmmoSpawn = 0x1,
	EHeal = 0x2,
};

