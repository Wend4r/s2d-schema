#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d0
// Has VTable
class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	QAngle m_qRelativeOffset; // 0x1a0	
	float m_flRelativeDist; // 0x1ac	
	float m_flMaxDist; // 0x1b0	
	Vector m_vecOffsetDir; // 0x1b4	
	Vector m_vecStartPosition; // 0x1c0	
};

