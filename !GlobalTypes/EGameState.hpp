#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class EGameState : uint32_t
{
	EGameState_Invalid = 0x0,
	EGameState_Init = 0x1,
	EGameState_WaitingForPlayersToJoin = 0x2,
	EGameState_HeroSelection = 0x3,
	EGameState_PreGameWait = 0x4,
	EGameState_GameInProgress = 0x5,
	EGameState_PostGame = 0x6,
	EGameState_Abandoned = 0x7,
	EGameState_End = 0x8,
};

