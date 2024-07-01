#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ECitadelNewPlayerProgressFlag : uint32_t
{
	k_eNewPlayerProgress_GettingStarted = 0x1,
	k_eNewPlayerProgress_HeroTraining = 0x2,
	k_eNewPlayerProgress_LaneTraining = 0x3,
};

