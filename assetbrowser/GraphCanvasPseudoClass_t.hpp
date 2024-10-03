#pragma once

#include <cstdint>

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class GraphCanvasPseudoClass_t : uint32_t
{
	// MPropertySuppressEnumerator
	INVALID = 0x0,
	FIRST_CHILD = 0x1,
	LAST_CHILD = 0x2,
	NTH_CHILD = 0x3,
	NTH_LAST_CHILD = 0x4,
	ONLY_CHILD = 0x5,
	HOVER_ASSOCIATE = 0x6,
	HOVER_DESCENDANT = 0x7,
	SELECTED = 0x8,
	HOVER_SELF = 0x9,
};

