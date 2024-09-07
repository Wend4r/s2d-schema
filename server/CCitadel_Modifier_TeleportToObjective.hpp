#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_TeleportToObjective : public CCitadelModifier
{
public:
	Vector m_vDest; // 0xc8	
	QAngle m_angDestAngles; // 0xd4	
	Vector m_vDestVelocity; // 0xe0	
};

