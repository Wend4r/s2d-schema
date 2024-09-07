#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc88
// Has VTable
class CCitadel_Ability_Teleport : public C_CitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xc60	
private:
	[[maybe_unused]] uint8_t __pad0c61[0x3]; // 0xc61
public:
	Vector m_vTargetPosition; // 0xc64	
	QAngle m_vTargetAngles; // 0xc70	
};

