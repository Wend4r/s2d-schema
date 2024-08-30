#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Ability_Teleport : public C_CitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c51[0x3]; // 0xc51
public:
	Vector m_vTargetPosition; // 0xc54	
	QAngle m_vTargetAngles; // 0xc60	
};

