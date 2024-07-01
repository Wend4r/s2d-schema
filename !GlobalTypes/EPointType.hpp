#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class EPointType : uint32_t
{
	EPointType_MoveTarget = 0x0,
	EPointType_EnemyBot = 0x1,
	EPointType_EnemyTrooper = 0x2,
	EPointType_FriendlyBot = 0x3,
	EPointType_FriendlyTrooper = 0x4,
	EPointType_DamageZone = 0x5,
};

