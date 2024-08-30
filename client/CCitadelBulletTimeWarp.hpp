#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MNetworkVarNames "float m_flBulletTimeScale"
// MNetworkVarNames "float m_flProjectileTimeScale"
// MNetworkVarNames "GameTime_t m_flExpireTime"
// MNetworkVarNames "float m_flStopDuration"
class CCitadelBulletTimeWarp : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	float m_flBulletTimeScale; // 0x830	
	// MNetworkEnable
	float m_flProjectileTimeScale; // 0x834	
	// MNetworkEnable
	GameTime_t m_flExpireTime; // 0x838	
	// MNetworkEnable
	float m_flStopDuration; // 0x83c	
};

