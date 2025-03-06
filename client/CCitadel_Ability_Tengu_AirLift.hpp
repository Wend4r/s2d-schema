#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe68
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
	CHandle< C_BaseEntity > m_hGrabTarget; // 0xc50	
	ParticleIndex_t m_nHoldBombEffect; // 0xc54	
private:
	[[maybe_unused]] uint8_t __pad0c58[0x1f8]; // 0xc58
public:
	// MNetworkEnable
	EFlightState m_eFlightState; // 0xe50	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xe51	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xe52	
private:
	[[maybe_unused]] uint8_t __pad0e53[0x1]; // 0xe53
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xe54	
};

