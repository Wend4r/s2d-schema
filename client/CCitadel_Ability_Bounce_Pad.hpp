#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd60
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility
{
public:
	Vector m_vForward; // 0xc28	
	bool m_bShouldDeploy; // 0xc34	
	bool m_bAnglesSet; // 0xc35	
	bool m_bCanCancel; // 0xc36	
private:
	[[maybe_unused]] uint8_t __pad0c37[0x119]; // 0xc37
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xd50	
};

