#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CUtlVector< CHandle< C_BaseEntity > > m_vecPuddleModifiers; // 0xc60	
private:
	[[maybe_unused]] uint8_t __pad0c78[0x230]; // 0xc78
public:
	GameTime_t m_LastDetonateTime; // 0xea8	
};

