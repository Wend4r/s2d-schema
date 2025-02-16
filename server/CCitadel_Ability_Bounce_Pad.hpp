#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public CCitadelBaseAbility
{
public:
	Vector m_vForward; // 0xb00	
	bool m_bShouldDeploy; // 0xb0c	
	bool m_bAnglesSet; // 0xb0d	
	bool m_bCanCancel; // 0xb0e	
private:
	[[maybe_unused]] uint8_t __pad0b0f[0x119]; // 0xb0f
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xc28	
};

