#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x308
// Has VTable
class CCitadel_Modifier_Bebop_LaserBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x200]; // 0xc8
public:
	GameTime_t m_flSoundStartTime; // 0x2c8	
private:
	[[maybe_unused]] uint8_t __pad02cc[0x4]; // 0x2cc
public:
	Vector m_vStart; // 0x2d0	
	Vector m_vEnd; // 0x2dc	
	Vector m_vPrevEnd; // 0x2e8	
	float m_flAngleBetweenTrace; // 0x2f4	
	float m_flDamagePerTick; // 0x2f8	
	GameTime_t m_flNextDamageTick; // 0x2fc	
	int32_t m_nTotalDamage; // 0x300	
};

