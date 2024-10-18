#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1238
// Has VTable
// 
// MNetworkVarNames "int m_nDecoyShotTick"
class C_DecoyProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	int32_t m_nDecoyShotTick; // 0x1208	
	int32_t m_nClientLastKnownDecoyShotTick; // 0x120c	
private:
	[[maybe_unused]] uint8_t __pad1210[0x20]; // 0x1210
public:
	GameTime_t m_flTimeParticleEffectSpawn; // 0x1230	
};

