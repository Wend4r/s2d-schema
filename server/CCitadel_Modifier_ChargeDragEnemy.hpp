#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x118]; // 0xc8
public:
	QAngle m_qRelativeOffset; // 0x1e0	
	float m_flRelativeDist; // 0x1ec	
	float m_flMaxDist; // 0x1f0	
	Vector m_vecOffsetDir; // 0x1f4	
	Vector m_vecStartPosition; // 0x200	
};

