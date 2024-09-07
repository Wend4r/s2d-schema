#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class ETelepunchState_t : uint8_t
{
	ETelepunchState_None = 0x0,
	ETelepunchState_EnemyPortalTelegraph = 0x1,
	ETelepunchState_SelfPortalTelegraph = 0x2,
	ETelepunchState_Windup = 0x3,
	ETelepunchState_Attack = 0x4,
};

