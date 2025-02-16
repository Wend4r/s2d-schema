#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x118]; // 0xca0
public:
	bool m_bZoomed; // 0xdb8	
	// MNetworkEnable
	bool m_bAirCast; // 0xdb9	
private:
	[[maybe_unused]] uint8_t __pad0dba[0x2]; // 0xdba
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xdbc	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xdc8	
private:
	[[maybe_unused]] uint8_t __pad0dd4[0xc]; // 0xdd4
public:
	bool m_bNeedsBeamReset; // 0xde0	
};

