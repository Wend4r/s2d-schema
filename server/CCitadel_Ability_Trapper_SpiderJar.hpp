#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdc0
// Has VTable
class CCitadel_Ability_Trapper_SpiderJar : public CCitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xb00	
	QAngle m_qLaunchAngle; // 0xb0c	
	bool m_bHasMadeSpiders; // 0xb18	
};

