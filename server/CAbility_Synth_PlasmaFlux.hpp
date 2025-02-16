#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x10]; // 0xb00
public:
	bool m_bTeleported; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b11[0x7]; // 0xb11
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // 0xb18	
	Vector m_vLastValidTeleportPosition; // 0xb30	
	GameTime_t m_flProjectileLaunchTime; // 0xb3c	
	GameTime_t m_flProjectileExpireTime; // 0xb40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile; // 0xb44	
};

