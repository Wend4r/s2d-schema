#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class ModifierAttribute_t : uint32_t
{
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	MODIFIER_ATTRIBUTE_NONE = 0x0,
	MODIFIER_ATTRIBUTE_PERMANENT = 0x1,
	MODIFIER_ATTRIBUTE_MULTIPLE = 0x2,
	MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE = 0x4,
	// MPropertySuppressEnumerator
	MODIFIER_ATTRIBUTE_AURA_PRIORITY = 0x8,
	MODIFIER_ATTRIBUTE_CANNOT_BE_PURGED = 0x10,
	// MPropertySuppressEnumerator
	MODIFIER_ATTRIBUTE_INTRINSIC = 0x20,
	MODIFIER_ATTRIBUTE_TRANSFER_TO_RAGDOLL = 0x40,
};

