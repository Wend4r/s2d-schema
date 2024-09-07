#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class IKTargetSource : uint32_t
{
	// MPropertyFriendlyName "Bone"
	IKTARGETSOURCE_Bone = 0x0,
	// MPropertyFriendlyName "Animgraph Parameter"
	IKTARGETSOURCE_AnimgraphParameter = 0x1,
	IKTARGETSOURCE_COUNT = 0x2,
};

