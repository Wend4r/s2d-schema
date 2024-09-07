#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 11
// Alignment: 4
// Size: 0x4
enum class Flinch_DamageClasses_t : uint32_t
{
	AGE_DMG_INVALID = 0xffffffffffffffff,
	AGE_DMG_LIGHT = 0x0,
	AGE_DMG_HEAVY = 0x1,
	AGE_DMG_BLAST = 0x2,
	AGE_DMG_PHYSICS = 0x3,
	AGE_DMG_MELEE = 0x4,
	AGE_DMG_SHOCK = 0x5,
	AGE_DMG_BURN = 0x6,
	AGE_DMG_SONIC_SECONDARY = 0x7,
	AGE_DMG_SONIC_PRIMARY = 0x8,
	AGE_DMG_NEWTON = 0x9,
};

