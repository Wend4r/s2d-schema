#pragma once

#include <cstdint>

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class GraphCanvasRenderLayer_t : uint32_t
{
	INVALID = 0xffffffffffffffff,
	COMMENTS = 0x0,
	CONNECTIONS_BACKGROUND = 0x1,
	GROUP_BACKGROUND = 0x2,
	DEFAULT = 0x3,
	NODES = 0x4,
	CONNECTIONS_FOREGROUND = 0x5,
	COMMENT_OVERLAY = 0x6,
	DEBUGGER_OVERLAY = 0x7,
	SELECTION_OVERLAY = 0x8,
	HOVER_OVERLAY = 0x9,
	STANDARD_LAYER_COUNT = 0xa,
	SPECIAL_LAYER_HOVER_TOOLTIP = 0xb,
};

