#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class P2P_Messages : uint32_t
{
	p2p_TextMessage = 0x100,
	p2p_Voice = 0x101,
	p2p_Ping = 0x102,
	p2p_VRAvatarPosition = 0x103,
	p2p_WatchSynchronization = 0x104,
	p2p_FightingGame_GameData = 0x105,
	p2p_FightingGame_Connection = 0x106,
};

