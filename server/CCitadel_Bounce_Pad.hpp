#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf0
// Has VTable
// 
// MNetworkVarNames "float m_flUpFactor"
// MNetworkVarNames "float m_flBounceVelocity"
class CCitadel_Bounce_Pad : public CCitadelAnimatingModelEntity
{
public:
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xad8	
	// MNetworkEnable
	float m_flUpFactor; // 0xadc	
	// MNetworkEnable
	float m_flBounceVelocity; // 0xae0	
	float m_flBarrelBounceVelocity; // 0xae4	
	float m_flBarrelUpFactor; // 0xae8	
	bool m_bSpeedOnLand; // 0xaec	
};

