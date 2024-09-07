#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_BlastPush : public CCitadelModifier
{
public:
	Vector m_vPush; // 0xc8	
	float m_flPushVelocity; // 0xd4	
	float m_flMaxPushVelocity; // 0xd8	
	float m_flMaxPushVelocitySqr; // 0xdc	
};

