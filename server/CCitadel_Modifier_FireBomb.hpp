#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x158
// Has VTable
class CCitadel_Modifier_FireBomb : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	float m_flSideMoveSpeed; // 0x138	
	Vector m_vReturnPosition; // 0x13c	
	QAngle m_vReturnAngles; // 0x148	
};

