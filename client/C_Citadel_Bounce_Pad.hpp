#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MNetworkVarNames "float m_flUpFactor"
// MNetworkVarNames "float m_flBounceVelocity"
class C_Citadel_Bounce_Pad : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	float m_flUpFactor; // 0xa78	
	// MNetworkEnable
	float m_flBounceVelocity; // 0xa7c	
	float m_flBarrelBounceVelocity; // 0xa80	
	float m_flBarrelUpFactor; // 0xa84	
	bool m_bSpeedOnLand; // 0xa88	
};

