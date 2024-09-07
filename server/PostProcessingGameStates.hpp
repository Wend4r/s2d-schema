#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PostProcessingGameStates : uint32_t
{
	PostProcState_Killed = 0x0,
	PostProcState_Black = 0x1,
	PostProcState_Blinded = 0x2,
	PostProcState_ShivPossessed = 0x3,
};

