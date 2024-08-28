#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x8]; // 0xab0
public:
	bool m_bTeleported; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0ab9[0x7]; // 0xab9
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // 0xac0	
	Vector m_vLastValidTeleportPosition; // 0xad8	
	GameTime_t m_flProjectileLaunchTime; // 0xae4	
	GameTime_t m_flProjectileExpireTime; // 0xae8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile; // 0xaec	
};

