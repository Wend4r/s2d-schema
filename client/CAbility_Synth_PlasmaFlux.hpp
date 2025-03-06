#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x10]; // 0xc50
public:
	bool m_bTeleported; // 0xc60	
private:
	[[maybe_unused]] uint8_t __pad0c61[0x3]; // 0xc61
public:
	GameTime_t m_flProjectileLaunchTime; // 0xc64	
	GameTime_t m_flProjectileExpireTime; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xc6c	
};

