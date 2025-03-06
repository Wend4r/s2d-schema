#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "float m_flUpFactor"
// MNetworkVarNames "float m_flBounceVelocity"
class CCitadel_Bounce_Pad : public CCitadelAnimatingModelEntity
{
public:
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xc10	
	// MNetworkEnable
	float m_flUpFactor; // 0xc14	
	// MNetworkEnable
	float m_flBounceVelocity; // 0xc18	
	float m_flBarrelBounceVelocity; // 0xc1c	
	float m_flBarrelUpFactor; // 0xc20	
	bool m_bSpeedOnLand; // 0xc24	
	bool m_bHasBouncedPlayerBefore; // 0xc25	
};

