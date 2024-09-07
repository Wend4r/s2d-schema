#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
public:
	bool m_bTeleported; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c69[0x3]; // 0xc69
public:
	GameTime_t m_flProjectileLaunchTime; // 0xc6c	
	GameTime_t m_flProjectileExpireTime; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xc74	
};

