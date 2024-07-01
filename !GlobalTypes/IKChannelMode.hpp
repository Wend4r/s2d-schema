#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class IKChannelMode : uint32_t
{
	// MPropertyFriendlyName "Two Bone"
	TwoBone = 0x0,
	// MPropertyFriendlyName "Two Bone + Translate"
	TwoBone_Translate = 0x1,
	// MPropertyFriendlyName "One Bone"
	OneBone = 0x2,
	// MPropertyFriendlyName "One Bone + Translate"
	OneBone_Translate = 0x3,
};

