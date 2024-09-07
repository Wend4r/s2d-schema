#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkVarNames "float m_flUpFactor"
// MNetworkVarNames "float m_flBounceVelocity"
class CCitadel_Bounce_Pad : public CCitadelAnimatingModelEntity
{
public:
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xaf8	
	// MNetworkEnable
	float m_flUpFactor; // 0xafc	
	// MNetworkEnable
	float m_flBounceVelocity; // 0xb00	
	float m_flBarrelBounceVelocity; // 0xb04	
	float m_flBarrelUpFactor; // 0xb08	
	bool m_bSpeedOnLand; // 0xb0c	
};

