#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class IkEndEffectorType : uint32_t
{
	// MPropertyFriendlyName "Attachment"
	IkEndEffector_Attachment = 0x0,
	// MPropertyFriendlyName "Last Bone in Chain"
	IkEndEffector_Bone = 0x1,
};

