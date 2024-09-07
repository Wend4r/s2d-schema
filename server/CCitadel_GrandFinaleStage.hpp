#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CCitadel_GrandFinaleStage : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0x978	
	Vector m_vEndPos; // 0x984	
	GameTime_t m_flStartEmitTime; // 0x990	
	GameTime_t m_flEndEmitTime; // 0x994	
	int32_t m_nTouchCount; // 0x998	
};

