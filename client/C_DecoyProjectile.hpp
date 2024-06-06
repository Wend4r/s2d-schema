#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1180
// Has VTable
// 
// MNetworkVarNames "int m_nDecoyShotTick"
class C_DecoyProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	int32_t m_nDecoyShotTick; // 0x1150	
	int32_t m_nClientLastKnownDecoyShotTick; // 0x1154	
private:
	[[maybe_unused]] uint8_t __pad1158[0x20]; // 0x1158
public:
	GameTime_t m_flTimeParticleEffectSpawn; // 0x1178	
};

