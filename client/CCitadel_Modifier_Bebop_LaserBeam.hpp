#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2f8
// Has VTable
class CCitadel_Modifier_Bebop_LaserBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x200]; // 0xc0
public:
	GameTime_t m_flSoundStartTime; // 0x2c0	
private:
	[[maybe_unused]] uint8_t __pad02c4[0x4]; // 0x2c4
public:
	Vector m_vStart; // 0x2c8	
	Vector m_vEnd; // 0x2d4	
	Vector m_vPrevEnd; // 0x2e0	
	float m_flAngleBetweenTrace; // 0x2ec	
	float m_flDamagePerTick; // 0x2f0	
	GameTime_t m_flNextDamageTick; // 0x2f4	
};

