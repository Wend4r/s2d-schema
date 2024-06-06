#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 15
// Alignment: 4
// Size: 0x4
enum class BloodType : uint32_t
{
	None = 0xffffffffffffffff,
	ColorRed = 0x0,
	ColorYellow = 0x1,
	ColorGreen = 0x2,
	ColorBrightGreen = 0x3,
	EntityMech = 0x4,
	EntityAntlion = 0x5,
	EntityZombie = 0x6,
	EntityBlob = 0x7,
	EntityBlobFrozen = 0x8,
	ColorRedLVL2 = 0x9,
	ColorRedLVL3 = 0xa,
	ColorRedLVL4 = 0xb,
	ColorRedLVL5 = 0xc,
	ColorRedLVL6 = 0xd,
};

