#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ScriptedHeldWeaponBehavior_t : uint32_t
{
	eInvalid = 0xffffffffffffffff,
	eHolster = 0x0,
	eDeploy = 0x1,
	eDrop = 0x2,
};

