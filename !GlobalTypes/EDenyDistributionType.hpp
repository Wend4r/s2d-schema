#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EDenyDistributionType : uint32_t
{
	EDenyToDenier = 0x0,
	EDenyToDenierNearbyTeammates = 0x1,
	EDenyToDenierTeam = 0x2,
	EDenyToNobody = 0x3,
	EDenyTypesCount = 0x4,
};

