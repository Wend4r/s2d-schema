#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x310
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x40]; // 0xc0
public:
	GameTime_t m_GameTimeEnabled; // 0x100	
	GameTime_t m_LastCatInAreaTime; // 0x104	
	bool m_bIsAttacking; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad0109[0x3]; // 0x109
public:
	int32_t m_iTargetID; // 0x10c	
};

