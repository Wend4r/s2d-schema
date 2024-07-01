#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Knockback : public CCitadel_Modifier_Stunned
{
public:
	float m_flForce; // 0xd0	
	bool m_bKnockedBack; // 0xd4	
};

