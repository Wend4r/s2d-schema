#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_BlastPush : public CCitadelModifier
{
public:
	Vector m_vPush; // 0xc0	
	float m_flPushVelocity; // 0xcc	
	float m_flMaxPushVelocity; // 0xd0	
	float m_flMaxPushVelocitySqr; // 0xd4	
};

