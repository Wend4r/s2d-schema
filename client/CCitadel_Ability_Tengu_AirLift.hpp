#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hGrabTarget"
// MNetworkVarNames "EFlightState m_eFlightState"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hGrabTarget; // 0xca0	
	ParticleIndex_t m_nHoldBombEffect; // 0xca4	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x1f8]; // 0xca8
public:
	// MNetworkEnable
	EFlightState m_eFlightState; // 0xea0	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xea1	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xea2	
private:
	[[maybe_unused]] uint8_t __pad0ea3[0x1]; // 0xea3
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xea4	
};

