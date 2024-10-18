#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfd8
// Has VTable
class C_BulletHitModel : public CBaseAnimGraph
{
public:
	matrix3x4_t m_matLocal; // 0xf88	
	int32_t m_iBoneIndex; // 0xfb8	
	CHandle< C_BaseEntity > m_hPlayerParent; // 0xfbc	
	bool m_bIsHit; // 0xfc0	
private:
	[[maybe_unused]] uint8_t __pad0fc1[0x3]; // 0xfc1
public:
	float m_flTimeCreated; // 0xfc4	
	Vector m_vecStartPos; // 0xfc8	
};

