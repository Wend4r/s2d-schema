#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x208
// Has VTable
class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
public:
	QAngle m_qRelativeOffset; // 0x1d8	
	float m_flRelativeDist; // 0x1e4	
	float m_flMaxDist; // 0x1e8	
	Vector m_vecOffsetDir; // 0x1ec	
	Vector m_vecStartPosition; // 0x1f8	
};

