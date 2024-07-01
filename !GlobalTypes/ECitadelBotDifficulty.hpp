#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ECitadelBotDifficulty : uint32_t
{
	k_ECitadelBotDifficulty_None = 0x0,
	k_ECitadelBotDifficulty_Easy = 0x1,
	k_ECitadelBotDifficulty_Medium = 0x2,
	k_ECitadelBotDifficulty_Hard = 0x3,
	k_ECitadelBotDifficulty_Nightmare = 0x4,
	k_ECitadelBotDifficulty_Guided = 0x5,
};

