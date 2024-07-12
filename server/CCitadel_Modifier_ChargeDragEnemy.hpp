#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0xe0]; // 0xc8
public:
	QAngle m_qRelativeOffset; // 0x1a8	
	float m_flRelativeDist; // 0x1b4	
	float m_flMaxDist; // 0x1b8	
	Vector m_vecOffsetDir; // 0x1bc	
	Vector m_vecStartPosition; // 0x1c8	
};

