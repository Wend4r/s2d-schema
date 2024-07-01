#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
// 
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "GameTime_t m_tDieTime"
class CProjectile_Stomp_Projectile : public CCitadelProjectile
{
public:
	Vector m_vLastStompPos; // 0x7f8	
	bool m_bFinished; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
public:
	// MNetworkEnable
	float m_flWidth; // 0x808	
	// MNetworkEnable
	GameTime_t m_tDieTime; // 0x80c	
};

