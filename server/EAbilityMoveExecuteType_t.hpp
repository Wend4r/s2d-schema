#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class EAbilityMoveExecuteType_t : uint8_t
{
	EMoveExecute_TryPlayerMove = 0x0,
	EMoveExecute_FullWalkMove = 0x1,
	EMoveExecute_NoclipMove = 0x2,
	EMoveExecute_FlyMove = 0x3,
};

