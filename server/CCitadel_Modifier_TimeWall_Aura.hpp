#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x188
// Has VTable
class CCitadel_Modifier_TimeWall_Aura : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e8[0x70]; // 0xe8
public:
	CUtlVector< CHandle< CCitadelBulletTimeWarp > > m_vecTimeWarps; // 0x158	
};

