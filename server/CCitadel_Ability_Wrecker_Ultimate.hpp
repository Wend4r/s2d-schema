#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc10
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Wrecker_Ultimate : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x20]; // 0xb00
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xb20	
};

