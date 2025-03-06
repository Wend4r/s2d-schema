#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe60
// Has VTable
class CCitadel_Ability_Magician_BigBolt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x200]; // 0xc50
public:
	GameTime_t m_flNextShootTime; // 0xe50	
	int32_t m_iBoltsFired; // 0xe54	
	int32_t m_iRemainingBolts; // 0xe58	
	bool m_bPreppingShoot; // 0xe5c	
};

