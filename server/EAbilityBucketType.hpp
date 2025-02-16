#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EAbilityBucketType : uint32_t
{
	EAbilityBucketInnate = 0xffffffffffffffff,
	EAbilityBucketWeapon = 0x0,
	EAbilityBucketVitality = 0x1,
	EAbilityBucketSpirit = 0x2,
};

