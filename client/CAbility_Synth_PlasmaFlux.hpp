#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x8]; // 0xc50
public:
	bool m_bTeleported; // 0xc58	
private:
	[[maybe_unused]] uint8_t __pad0c59[0x3]; // 0xc59
public:
	GameTime_t m_flProjectileLaunchTime; // 0xc5c	
	GameTime_t m_flProjectileExpireTime; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xc64	
};

