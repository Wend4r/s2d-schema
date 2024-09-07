#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class ECitadelWeaponTypes : uint32_t
{
	ECitadelWeapon_Invalid = 0xffffffffffffffff,
	ECitadelWeapon_Pistol = 0x0,
	ECitadelWeapon_SMG = 0x1,
	ECitadelWeapon_Rifle = 0x2,
	ECitadelWeapon_MiniGun = 0x3,
	ECitadelWeapon_Shotgun = 0x4,
	ECitadelWeapon_Bow = 0x5,
	ECitadelWeapon_Laser = 0x6,
	ECitadelWeapon_Projectile = 0x7,
};

