#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class PreviewCharacterMode : uint32_t
{
	DIORAMA = 0x0,
	MAIN_MENU = 0x1,
	BUY_MENU = 0x2,
	TEAM_SELECT = 0x3,
	END_OF_MATCH = 0x4,
	INVENTORY_INSPECT = 0x5,
	WALKING = 0x6,
	TEAM_INTRO = 0x7,
	WINGMAN_INTRO = 0x8,
};

