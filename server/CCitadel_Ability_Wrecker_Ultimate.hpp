#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Wrecker_Ultimate : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x20]; // 0xad8
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xaf8	
};

