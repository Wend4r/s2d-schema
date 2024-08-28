#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_PerchedPredatorDrag : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	QAngle m_qRelativeOffset; // 0x130	
	float m_flRelativeDist; // 0x13c	
	Vector m_vecOffsetDir; // 0x140	
	CHandle< C_BaseEntity > m_hFollowEnt; // 0x14c	
};

