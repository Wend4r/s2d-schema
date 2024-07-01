#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe0
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public CCitadelBaseAbility
{
public:
	Vector m_vForward; // 0xaa8	
	bool m_bShouldDeploy; // 0xab4	
	bool m_bAnglesSet; // 0xab5	
	bool m_bCanCancel; // 0xab6	
private:
	[[maybe_unused]] uint8_t __pad0ab7[0x119]; // 0xab7
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xbd0	
};

