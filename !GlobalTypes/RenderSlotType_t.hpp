#pragma once

#include <cstdint>

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class RenderSlotType_t : uint32_t
{
	RENDER_SLOT_INVALID = 0xffffffffffffffff,
	RENDER_SLOT_PER_VERTEX = 0x0,
	RENDER_SLOT_PER_INSTANCE = 0x1,
};

