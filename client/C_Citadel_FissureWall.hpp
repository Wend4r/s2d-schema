#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb28
// Has VTable
class C_Citadel_FissureWall : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xb00	
	Vector m_vEndPos; // 0xb0c	
	GameTime_t m_flStartEmitTime; // 0xb18	
	GameTime_t m_flEndEmitTime; // 0xb1c	
	bool m_bSolid; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b21[0x3]; // 0xb21
public:
	int32_t m_nTouchCount; // 0xb24	
};

