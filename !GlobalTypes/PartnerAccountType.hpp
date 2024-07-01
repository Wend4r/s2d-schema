#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PartnerAccountType : uint32_t
{
	PARTNER_NONE = 0x0,
	PARTNER_PERFECT_WORLD = 0x1,
	PARTNER_INVALID = 0x3,
};

