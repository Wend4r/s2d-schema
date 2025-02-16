#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x10]; // 0xca0
public:
	bool m_bTeleported; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb1[0x3]; // 0xcb1
public:
	GameTime_t m_flProjectileLaunchTime; // 0xcb4	
	GameTime_t m_flProjectileExpireTime; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xcbc	
};

