#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CCitadel_FissureWall : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0x978	
	Vector m_vEndPos; // 0x984	
	GameTime_t m_flStartEmitTime; // 0x990	
	GameTime_t m_flEndEmitTime; // 0x994	
	bool m_bSolid; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x3]; // 0x999
public:
	int32_t m_nTouchCount; // 0x99c	
};

