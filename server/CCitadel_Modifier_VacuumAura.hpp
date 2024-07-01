#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x290
// Has VTable
class CCitadel_Modifier_VacuumAura : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e8[0x188]; // 0xe8
public:
	CUtlVector< CHandle< CBaseEntity > > m_hEnemyHeroInVacuum; // 0x270	
	int32_t m_nNumPlayersKilled; // 0x288	
	GameTime_t m_tLastDamageTime; // 0x28c	
};

