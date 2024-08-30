#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xab8
// Has VTable
class CCitadel_GrandFinaleStage : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa90	
	Vector m_vEndPos; // 0xa9c	
	GameTime_t m_flStartEmitTime; // 0xaa8	
	GameTime_t m_flEndEmitTime; // 0xaac	
	int32_t m_nTouchCount; // 0xab0	
};

