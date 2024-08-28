#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd00
// Has VTable
// 
// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	CUtlVector< CHandle< CBaseEntity > > m_vecPuddleModifiers; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ac8[0x230]; // 0xac8
public:
	GameTime_t m_LastDetonateTime; // 0xcf8	
};

