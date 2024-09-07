#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ModifierHiddenType_t : uint32_t
{
	// MPropertyFriendlyName "Hide always"
	eHideAlways = 0x0,
	// MPropertyFriendlyName "Hide if caster is target"
	eHideIfCasterIsTarget = 0x1,
};

