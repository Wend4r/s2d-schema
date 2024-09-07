#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class EBaseEntityMessages : uint32_t
{
	EM_PlayJingle = 0x88,
	EM_ScreenOverlay = 0x89,
	EM_RemoveAllDecals = 0x8a,
	EM_PropagateForce = 0x8b,
	EM_DoSpark = 0x8c,
	EM_FixAngle = 0x8d,
};

