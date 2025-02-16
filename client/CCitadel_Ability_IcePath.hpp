#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd30
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x70]; // 0xca0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIcePathing; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d11[0x3]; // 0xd11
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xd14	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xd20	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xd2c	
};

