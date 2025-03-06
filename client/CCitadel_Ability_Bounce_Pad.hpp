#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility
{
public:
	Vector m_vForward; // 0xc50	
	bool m_bShouldDeploy; // 0xc5c	
	bool m_bAnglesSet; // 0xc5d	
	bool m_bCanCancel; // 0xc5e	
private:
	[[maybe_unused]] uint8_t __pad0c5f[0x119]; // 0xc5f
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xd78	
};

