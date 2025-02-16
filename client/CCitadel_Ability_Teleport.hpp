#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class CCitadel_Ability_Teleport : public C_CitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca1[0x3]; // 0xca1
public:
	Vector m_vTargetPosition; // 0xca4	
	QAngle m_vTargetAngles; // 0xcb0	
};

