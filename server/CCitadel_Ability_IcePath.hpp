#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba0
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x70]; // 0xb00
public:
	Vector m_vInitialPosition; // 0xb70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIcePathing; // 0xb7c	
private:
	[[maybe_unused]] uint8_t __pad0b7d[0x3]; // 0xb7d
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xb80	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xb8c	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xb98	
};

