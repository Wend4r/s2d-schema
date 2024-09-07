#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class CameraParam : uint32_t
{
	k_EParam_ClearAllOps = 0x0,
	k_EParam_ClearAllOpsForContext = 0x1,
	k_EParam_Distance = 0x2,
	k_EParam_FOV = 0x3,
	k_EParam_TargetPosition = 0x4,
	k_EParam_VertOffset = 0x5,
	k_EParam_HorizOffset = 0x6,
};

