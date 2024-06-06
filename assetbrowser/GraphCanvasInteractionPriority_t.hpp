#pragma once

#include <cstdint>

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class GraphCanvasInteractionPriority_t : uint32_t
{
	NONINTERACTIVE = 0xffffffffffffd8f1,
	GROUP = 0x0,
	BASE = 0x1,
	DRAG_HANDLE = 0x2,
	RESIZE_EDGE = 0x3,
	RESIZE_CORNER = 0x4,
	ADD_FLOW = 0x5,
	PORT = 0x6,
	ANCHOR = 0x7,
};

