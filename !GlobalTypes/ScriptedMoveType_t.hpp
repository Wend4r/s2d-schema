#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ScriptedMoveType_t : uint32_t
{
	SCRIPTED_MOVETYPE_NONE = 0x0,
	SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
	SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
	SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3,
};

