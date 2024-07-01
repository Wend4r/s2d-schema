#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	bool m_bTeleported; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c31[0x3]; // 0xc31
public:
	GameTime_t m_flProjectileLaunchTime; // 0xc34	
	GameTime_t m_flProjectileExpireTime; // 0xc38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xc3c	
};

