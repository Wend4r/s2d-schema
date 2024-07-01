#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2d0
// Has VTable
class CCitadel_Modifier_Bebop_LaserBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x1c8]; // 0xc8
public:
	GameTime_t m_flSoundStartTime; // 0x290	
private:
	[[maybe_unused]] uint8_t __pad0294[0x4]; // 0x294
public:
	Vector m_vStart; // 0x298	
	Vector m_vEnd; // 0x2a4	
	Vector m_vPrevEnd; // 0x2b0	
	float m_flAngleBetweenTrace; // 0x2bc	
	float m_flDamagePerTick; // 0x2c0	
	GameTime_t m_flNextDamageTick; // 0x2c4	
	int32_t m_nTotalDamage; // 0x2c8	
};

