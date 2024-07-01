#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x70]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIcePathing; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xc9c	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xca8	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xcb4	
};

