#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ECitadelStatCategory : uint32_t
{
	ECitadelStat_Invalid = 0xffffffffffffffff,
	ECitadelStat_Weapon = 0x0,
	ECitadelStat_Vitality = 0x1,
	ECitadelStat_Spirit = 0x2,
};

