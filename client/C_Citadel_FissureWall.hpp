#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xab8
// Has VTable
class C_Citadel_FissureWall : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa90	
	Vector m_vEndPos; // 0xa9c	
	GameTime_t m_flStartEmitTime; // 0xaa8	
	GameTime_t m_flEndEmitTime; // 0xaac	
	bool m_bSolid; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x3]; // 0xab1
public:
	int32_t m_nTouchCount; // 0xab4	
};

