#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd70
// Has VTable
class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x20]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnGrabBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xc70	
private:
	[[maybe_unused]] uint8_t __pad0c7c[0xc]; // 0xc7c
public:
	bool m_bNeedsBeamReset; // 0xc88	
};

