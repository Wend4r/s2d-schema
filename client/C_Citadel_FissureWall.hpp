#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa98
// Has VTable
class C_Citadel_FissureWall : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa70	
	Vector m_vEndPos; // 0xa7c	
	GameTime_t m_flStartEmitTime; // 0xa88	
	GameTime_t m_flEndEmitTime; // 0xa8c	
	bool m_bSolid; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a91[0x3]; // 0xa91
public:
	int32_t m_nTouchCount; // 0xa94	
};

