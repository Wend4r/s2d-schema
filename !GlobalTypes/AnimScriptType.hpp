#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 3
// Alignment: 2
// Size: 0x2
enum class AnimScriptType : uint16_t
{
	ANIMSCRIPT_TYPE_INVALID = 0xffffffffffffffff,
	ANIMSCRIPT_FUSE_GENERAL = 0x0,
	ANIMSCRIPT_FUSE_STATEMACHINE = 0x1,
};

