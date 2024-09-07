#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class CMsgLaneColor : uint32_t
{
	k_ELaneColor_Invalid = 0x0,
	k_ELaneColor_Yellow = 0x1,
	k_ELaneColor_Orange = 0x3,
	k_ELaneColor_Blue = 0x4,
	k_ELaneColor_Purple = 0x6,
};

