#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x150]; // 0xaa8
public:
	bool m_bZoomed; // 0xbf8	
	// MNetworkEnable
	bool m_bAirCast; // 0xbf9	
private:
	[[maybe_unused]] uint8_t __pad0bfa[0x2]; // 0xbfa
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xbfc	
private:
	[[maybe_unused]] uint8_t __pad0c08[0x4]; // 0xc08
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc0c	
};

