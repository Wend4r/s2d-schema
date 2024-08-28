#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x150]; // 0xab0
public:
	bool m_bZoomed; // 0xc00	
	// MNetworkEnable
	bool m_bAirCast; // 0xc01	
private:
	[[maybe_unused]] uint8_t __pad0c02[0x2]; // 0xc02
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xc04	
private:
	[[maybe_unused]] uint8_t __pad0c10[0x4]; // 0xc10
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc14	
};

