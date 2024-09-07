#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility
{
public:
	Vector m_vForward; // 0xc60	
	bool m_bShouldDeploy; // 0xc6c	
	bool m_bAnglesSet; // 0xc6d	
	bool m_bCanCancel; // 0xc6e	
private:
	[[maybe_unused]] uint8_t __pad0c6f[0x119]; // 0xc6f
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xd88	
};

