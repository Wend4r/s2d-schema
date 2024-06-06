#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
// Has VTable
class C_BulletHitModel : public CBaseAnimGraph
{
public:
	matrix3x4_t m_matLocal; // 0xed0	
	int32_t m_iBoneIndex; // 0xf00	
	CHandle< C_BaseEntity > m_hPlayerParent; // 0xf04	
	bool m_bIsHit; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f09[0x3]; // 0xf09
public:
	float m_flTimeCreated; // 0xf0c	
	Vector m_vecStartPos; // 0xf10	
};

