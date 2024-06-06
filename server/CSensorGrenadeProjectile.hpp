#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa0
// Has VTable
class CSensorGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:
	GameTime_t m_fExpireTime; // 0xa90	
	GameTime_t m_fNextDetectPlayerSound; // 0xa94	
	CHandle< CBaseEntity > m_hDisplayGrenade; // 0xa98	
	
	// Datamap fields:
	// void CSensorGrenadeProjectileThink_Arm; // 0x0
	// void CSensorGrenadeProjectileThink_Remove; // 0x0
	// void CSensorGrenadeProjectileSensorThink; // 0x0
};

