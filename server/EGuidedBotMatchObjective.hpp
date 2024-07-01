#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EGuidedBotMatchObjective : uint32_t
{
	EGuidedBotMatchObjective_LaningMetrics = 0x0,
	EGuidedBotMatchObjective_PowerUp = 0x1,
	EGuidedBotMatchObjective_KillGuardian = 0x2,
	EGuidedBotMatchObjective_Complete = 0x3,
};

