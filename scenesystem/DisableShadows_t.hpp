#pragma once

#include <cstdint>

// Registered binary: scenesystem.dll (project 'scenesystem')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class DisableShadows_t : uint8_t
{
	kDisableShadows_None = 0x0,
	kDisableShadows_All = 0x1,
	kDisableShadows_Baked = 0x2,
	kDisableShadows_Realtime = 0x3,
};

