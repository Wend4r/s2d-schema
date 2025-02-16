#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb28
// Has VTable
class CCitadel_Ability_Teleport : public CCitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	Vector m_vTargetPosition; // 0xb04	
	QAngle m_vTargetAngles; // 0xb10	
};

