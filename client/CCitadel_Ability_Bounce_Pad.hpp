#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility
{
public:
	Vector m_vForward; // 0xca0	
	bool m_bShouldDeploy; // 0xcac	
	bool m_bAnglesSet; // 0xcad	
	bool m_bCanCancel; // 0xcae	
private:
	[[maybe_unused]] uint8_t __pad0caf[0x119]; // 0xcaf
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xdc8	
};

