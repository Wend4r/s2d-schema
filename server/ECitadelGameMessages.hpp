#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ECitadelGameMessages : uint32_t
{
	k_EMsgGameServerToClientConnectionStatus = 0xa,
	k_EMsgGameServerToClientInitialGameState = 0xc,
	k_EMsgGameServerToClientGameCompleted = 0xd,
	k_EMsgGameServerToClientGoodbye = 0xf,
};

