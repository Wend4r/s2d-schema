#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EPlayerPlayState : uint32_t
{
	EPlayerStateInvalid = 0xffffffffffffffff,
	EPlayerActive = 0x0,
	EPlayerAwaitingHeroAssignment = 0x1,
	EPlayerChoosingHero = 0x2,
	EPlayerPlayStateCount = 0x3,
};

