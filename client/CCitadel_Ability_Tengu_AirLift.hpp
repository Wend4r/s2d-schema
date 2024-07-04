#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bFirstMovementTick"
// MNetworkVarNames "float m_flCurrentSpeed"
// MNetworkVarNames "QAngle m_qLastAngles"
class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xa8]; // 0xc28
public:
	// MNetworkEnable
	bool m_bFlying; // 0xcd0	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xcd1	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xcd2	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xcd3	
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xcd4	
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xcd8	
};

