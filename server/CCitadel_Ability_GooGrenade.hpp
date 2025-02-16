#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	CUtlVector< CHandle< CBaseEntity > > m_vecPuddleModifiers; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b18[0x1f8]; // 0xb18
public:
	GameTime_t m_LastDetonateTime; // 0xd10	
};

