#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	CUtlVector< CHandle< CBaseEntity > > m_vecPuddleModifiers; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0ac0[0x1c0]; // 0xac0
public:
	GameTime_t m_LastDetonateTime; // 0xc80	
};

