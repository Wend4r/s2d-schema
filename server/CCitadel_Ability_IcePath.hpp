#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb50
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x70]; // 0xab0
public:
	Vector m_vInitialPosition; // 0xb20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIcePathing; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b2d[0x3]; // 0xb2d
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xb30	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xb3c	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xb48	
};

