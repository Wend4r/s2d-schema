#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ECitadelAccountPermissionFlag : uint32_t
{
	k_eAccountPermission_PrivateBot = 0x1,
	k_eAccountPermission_CoopBot = 0x2,
	k_eAccountPermission_Unranked = 0x3,
};

