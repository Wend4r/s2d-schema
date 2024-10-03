#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfd0
// Has VTable
class C_BulletHitModel : public CBaseAnimGraph
{
public:
	matrix3x4_t m_matLocal; // 0xf80	
	int32_t m_iBoneIndex; // 0xfb0	
	CHandle< C_BaseEntity > m_hPlayerParent; // 0xfb4	
	bool m_bIsHit; // 0xfb8	
private:
	[[maybe_unused]] uint8_t __pad0fb9[0x3]; // 0xfb9
public:
	float m_flTimeCreated; // 0xfbc	
	Vector m_vecStartPos; // 0xfc0	
};

