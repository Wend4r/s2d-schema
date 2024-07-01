#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
class CCitadel_FissureWall : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0x958	
	Vector m_vEndPos; // 0x964	
	GameTime_t m_flStartEmitTime; // 0x970	
	GameTime_t m_flEndEmitTime; // 0x974	
	bool m_bSolid; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x3]; // 0x979
public:
	int32_t m_nTouchCount; // 0x97c	
};

