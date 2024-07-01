#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class ECitadelMatchMode : uint32_t
{
	k_ECitadelMatchMode_Invalid = 0x0,
	k_ECitadelMatchMode_Unranked = 0x1,
	k_ECitadelMatchMode_PrivateLobby = 0x2,
	k_ECitadelMatchMode_CoopBot = 0x3,
	k_ECitadelMatchMode_Ranked = 0x4,
	k_ECitadelMatchMode_ServerTest = 0x5,
	k_ECitadelMatchMode_Tutorial = 0x6,
};

