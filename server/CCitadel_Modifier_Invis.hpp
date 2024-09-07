#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x268
// Has VTable
class CCitadel_Modifier_Invis : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x188]; // 0xc8
public:
	bool m_bInvis; // 0x250	
private:
	[[maybe_unused]] uint8_t __pad0251[0x3]; // 0x251
public:
	GameTime_t m_flStartInvisTime; // 0x254	
	bool m_bFullyInvis; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad0259[0x3]; // 0x259
public:
	GameTime_t m_flLastDamageTaken; // 0x25c	
	GameTime_t m_flLastSpotted; // 0x260	
};

