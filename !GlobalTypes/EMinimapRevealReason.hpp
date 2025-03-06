#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EMinimapRevealReason : uint32_t
{
	EVisibleByEnemyPlayer = 0x0,
	EVisibleFromAttackingEnemyPlayer = 0x1,
	EVisibleByNPC = 0x2,
	EVisibleByObjective = 0x3,
	EVisibleByMirageTeleport = 0x4,
};

