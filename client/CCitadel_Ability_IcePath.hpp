#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x70]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIcePathing; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xcc4	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xcd0	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xcdc	
};

