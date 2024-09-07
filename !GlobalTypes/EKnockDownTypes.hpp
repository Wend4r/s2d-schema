#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class EKnockDownTypes : uint32_t
{
	KnockdownLarge = 0x0,
	KnockdownMedium = 0x1,
	KnockdownSmall = 0x2,
	KnockdownPancake = 0x3,
	KnockdownParried = 0x4,
	ENumKnockdowns = 0x5,
	EKnockdownInvalid = 0x5,
};

