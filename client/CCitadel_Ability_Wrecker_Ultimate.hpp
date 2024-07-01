#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x20]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnGrabBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c54[0xc]; // 0xc54
public:
	bool m_bNeedsBeamReset; // 0xc60	
};

