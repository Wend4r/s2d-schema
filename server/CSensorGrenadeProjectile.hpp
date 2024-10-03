#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb18
// Has VTable
class CSensorGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:
	GameTime_t m_fExpireTime; // 0xb08	
	GameTime_t m_fNextDetectPlayerSound; // 0xb0c	
	CHandle< CBaseEntity > m_hDisplayGrenade; // 0xb10	
	
	// Datamap fields:
	// void CSensorGrenadeProjectileThink_Arm; // 0x0
	// void CSensorGrenadeProjectileThink_Remove; // 0x0
	// void CSensorGrenadeProjectileSensorThink; // 0x0
};

