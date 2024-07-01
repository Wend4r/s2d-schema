#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
// MNetworkVarNames "bool m_bIsCasting"
class CCitadel_Ability_FireBomb : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x158]; // 0xaa8
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDetonateTime; // 0xc00	
	// MNetworkEnable
	bool m_bIsCasting; // 0xc18	
};

