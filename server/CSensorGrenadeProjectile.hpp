#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb60
// Has VTable
class CSensorGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:
	GameTime_t m_fExpireTime; // 0xb50	
	GameTime_t m_fNextDetectPlayerSound; // 0xb54	
	CHandle< CBaseEntity > m_hDisplayGrenade; // 0xb58	
	
	// Datamap fields:
	// void CSensorGrenadeProjectileThink_Arm; // 0x0
	// void CSensorGrenadeProjectileThink_Remove; // 0x0
	// void CSensorGrenadeProjectileSensorThink; // 0x0
};

