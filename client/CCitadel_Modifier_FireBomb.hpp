#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_FireBomb : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	float m_flSideMoveSpeed; // 0x130	
	Vector m_vReturnPosition; // 0x134	
	QAngle m_vReturnAngles; // 0x140	
};

