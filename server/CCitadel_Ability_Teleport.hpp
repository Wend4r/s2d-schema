#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
class CCitadel_Ability_Teleport : public CCitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0x3]; // 0xaa9
public:
	Vector m_vTargetPosition; // 0xaac	
	QAngle m_vTargetAngles; // 0xab8	
};

