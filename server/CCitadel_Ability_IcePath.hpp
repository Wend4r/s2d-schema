#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb48
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x70]; // 0xaa8
public:
	Vector m_vInitialPosition; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIcePathing; // 0xb24	
private:
	[[maybe_unused]] uint8_t __pad0b25[0x3]; // 0xb25
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xb28	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xb34	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xb40	
};

