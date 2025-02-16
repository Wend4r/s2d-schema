#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
class CCitadel_Ability_Magician_BigBolt : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x200]; // 0xb00
public:
	GameTime_t m_flNextShootTime; // 0xd00	
	int32_t m_iBoltsFired; // 0xd04	
	int32_t m_iRemainingBolts; // 0xd08	
	bool m_bPreppingShoot; // 0xd0c	
};

