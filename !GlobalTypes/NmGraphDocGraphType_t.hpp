#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class NmGraphDocGraphType_t : uint32_t
{
	Invalid = 0x0,
	BlendTree = 0x1,
	ValueTree = 0x2,
	StateMachine = 0x4,
	StateData = 0x8,
	TransitionConduit = 0x10,
};

