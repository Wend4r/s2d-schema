#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class CameraAction : uint32_t
{
	k_EAction_AddOp = 0x0,
	k_EAction_ClearAllOps = 0x1,
	k_EAction_ClearOpsForContext = 0x2,
};

