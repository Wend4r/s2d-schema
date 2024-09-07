#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd80
// Has VTable
class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x20]; // 0xc60
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnGrabBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xc80	
private:
	[[maybe_unused]] uint8_t __pad0c8c[0xc]; // 0xc8c
public:
	bool m_bNeedsBeamReset; // 0xc98	
};

