#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CCitadel_Ability_Magician_BigBolt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x200]; // 0xca0
public:
	GameTime_t m_flNextShootTime; // 0xea0	
	int32_t m_iBoltsFired; // 0xea4	
	int32_t m_iRemainingBolts; // 0xea8	
	bool m_bPreppingShoot; // 0xeac	
};

