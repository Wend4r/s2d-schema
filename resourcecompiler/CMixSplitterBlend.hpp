#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Splitter Blend Audio Node"
// MPropertyDescription "Blends a single track to multiple outputs based on a single control input.  This works similarly to the blend node, but in reverse.  It will always be blending to a contiguous set of outputs.  The control value will move the signal along the list of outputs."
class CMixSplitterBlend : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Lock to output (0-1)"
	float m_flLockAmount; // 0x20	
};

