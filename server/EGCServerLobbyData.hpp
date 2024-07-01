#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EGCServerLobbyData : uint32_t
{
	k_EServerLobbyData_PlayerMMR = 0x1,
	k_EServerLobbyData_PlayerInfo = 0x2,
	k_EServerLobbyData_PostMatchSurvey = 0x3,
	k_EServerLobbyData_AutoTest = 0x4,
};

