#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class BoneTransformSpace_t : uint32_t
{
	// MPropertyFriendlyName "Invalid"
	BoneTransformSpace_Invalid = 0xffffffffffffffff,
	// MPropertyFriendlyName "Parent Space"
	BoneTransformSpace_Parent = 0x0,
	// MPropertyFriendlyName "Model Space"
	BoneTransformSpace_Model = 0x1,
	// MPropertyFriendlyName "World Space"
	BoneTransformSpace_World = 0x2,
};

