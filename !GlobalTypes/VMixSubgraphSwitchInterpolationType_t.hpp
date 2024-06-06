#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class VMixSubgraphSwitchInterpolationType_t : uint32_t
{
	SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
	SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
	SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
};

