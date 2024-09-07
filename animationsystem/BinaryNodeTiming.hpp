#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class BinaryNodeTiming : uint32_t
{
	// MPropertyFriendlyName "Use Child1"
	UseChild1 = 0x0,
	// MPropertyFriendlyName "Use Child2"
	UseChild2 = 0x1,
	// MPropertyFriendlyName "Synchronize Children"
	SyncChildren = 0x2,
};

