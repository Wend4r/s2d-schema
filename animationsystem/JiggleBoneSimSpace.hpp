#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class JiggleBoneSimSpace : uint32_t
{
	// MPropertyFriendlyName "Local Space"
	SimSpace_Local = 0x0,
	// MPropertyFriendlyName "Model Space"
	SimSpace_Model = 0x1,
	// MPropertyFriendlyName "World Space"
	SimSpace_World = 0x2,
};

