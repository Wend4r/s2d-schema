#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x230
// Has VTable
class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public CCitadelModifier
{
public:
	bool m_bAddedStasisParticle; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	Vector m_vHoldOffset; // 0xcc	
	float m_flLastTouchTime; // 0xd8	
};

