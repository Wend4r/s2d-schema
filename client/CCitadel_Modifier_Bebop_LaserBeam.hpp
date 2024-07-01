#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2c0
// Has VTable
class CCitadel_Modifier_Bebop_LaserBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x1c8]; // 0xc0
public:
	GameTime_t m_flSoundStartTime; // 0x288	
private:
	[[maybe_unused]] uint8_t __pad028c[0x4]; // 0x28c
public:
	Vector m_vStart; // 0x290	
	Vector m_vEnd; // 0x29c	
	Vector m_vPrevEnd; // 0x2a8	
	float m_flAngleBetweenTrace; // 0x2b4	
	float m_flDamagePerTick; // 0x2b8	
	GameTime_t m_flNextDamageTick; // 0x2bc	
};

