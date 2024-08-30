#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	CUtlVector< CHandle< CBaseEntity > > m_vecPuddleModifiers; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0af0[0x230]; // 0xaf0
public:
	GameTime_t m_LastDetonateTime; // 0xd20	
};

