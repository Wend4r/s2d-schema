#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc50
// Has VTable
class CCitadel_Ability_Teleport : public C_CitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c29[0x3]; // 0xc29
public:
	Vector m_vTargetPosition; // 0xc2c	
	QAngle m_vTargetAngles; // 0xc38	
};

