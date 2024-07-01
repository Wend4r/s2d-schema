#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x8]; // 0xaa8
public:
	bool m_bTeleported; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x7]; // 0xab1
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // 0xab8	
	Vector m_vLastValidTeleportPosition; // 0xad0	
	GameTime_t m_flProjectileLaunchTime; // 0xadc	
	GameTime_t m_flProjectileExpireTime; // 0xae0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile; // 0xae4	
};

