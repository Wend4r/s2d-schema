#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hGrabTarget"
// MNetworkVarNames "EFlightState m_eFlightState"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x18]; // 0xb00
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hGrabTarget; // 0xb18	
	ParticleIndex_t m_nHoldBombEffect; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b20[0x1f8]; // 0xb20
public:
	// MNetworkEnable
	EFlightState m_eFlightState; // 0xd18	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xd19	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xd1a	
private:
	[[maybe_unused]] uint8_t __pad0d1b[0x1]; // 0xd1b
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xd1c	
};

