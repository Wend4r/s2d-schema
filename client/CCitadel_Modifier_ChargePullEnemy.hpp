#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_ChargePullEnemy : public CCitadelModifier
{
public:
	Vector m_vecOffsetDir; // 0xc0	
	float m_flTackleRadius; // 0xcc	
	float m_flPullTargetSpeed; // 0xd0	
};

