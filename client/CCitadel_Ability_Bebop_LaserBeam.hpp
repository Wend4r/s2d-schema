#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x150]; // 0xc50
public:
	bool m_bZoomed; // 0xda0	
	// MNetworkEnable
	bool m_bAirCast; // 0xda1	
private:
	[[maybe_unused]] uint8_t __pad0da2[0x2]; // 0xda2
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xda4	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xdb0	
private:
	[[maybe_unused]] uint8_t __pad0dbc[0xc]; // 0xdbc
public:
	bool m_bNeedsBeamReset; // 0xdc8	
};

