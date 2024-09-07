#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Knockback : public CCitadel_Modifier_Stunned
{
public:
	float m_flForce; // 0xc8	
	bool m_bKnockedBack; // 0xcc	
};

