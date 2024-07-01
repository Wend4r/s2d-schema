#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x150]; // 0xc28
public:
	bool m_bZoomed; // 0xd78	
	// MNetworkEnable
	bool m_bAirCast; // 0xd79	
private:
	[[maybe_unused]] uint8_t __pad0d7a[0x2]; // 0xd7a
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xd7c	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xd88	
private:
	[[maybe_unused]] uint8_t __pad0d94[0xc]; // 0xd94
public:
	bool m_bNeedsBeamReset; // 0xda0	
};

