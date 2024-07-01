#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc0
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
// MNetworkVarNames "bool m_bIsCasting"
class CCitadel_Ability_FireBomb : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x78]; // 0xc28
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDetonateTime; // 0xca0	
	// MNetworkEnable
	bool m_bIsCasting; // 0xcb8	
};

