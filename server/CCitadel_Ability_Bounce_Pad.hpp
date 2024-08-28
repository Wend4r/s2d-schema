#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public CCitadelBaseAbility
{
public:
	Vector m_vForward; // 0xab0	
	bool m_bShouldDeploy; // 0xabc	
	bool m_bAnglesSet; // 0xabd	
	bool m_bCanCancel; // 0xabe	
private:
	[[maybe_unused]] uint8_t __pad0abf[0x119]; // 0xabf
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xbd8	
};

