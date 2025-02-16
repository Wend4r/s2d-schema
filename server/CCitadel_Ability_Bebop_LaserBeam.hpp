#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x118]; // 0xb00
public:
	bool m_bZoomed; // 0xc18	
	// MNetworkEnable
	bool m_bAirCast; // 0xc19	
private:
	[[maybe_unused]] uint8_t __pad0c1a[0x2]; // 0xc1a
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xc1c	
private:
	[[maybe_unused]] uint8_t __pad0c28[0x4]; // 0xc28
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc2c	
};

