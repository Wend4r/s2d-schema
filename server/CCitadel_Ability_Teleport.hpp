#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad8
// Has VTable
class CCitadel_Ability_Teleport : public CCitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x3]; // 0xab1
public:
	Vector m_vTargetPosition; // 0xab4	
	QAngle m_vTargetAngles; // 0xac0	
};

