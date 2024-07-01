#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa98
// Has VTable
class CCitadel_GrandFinaleStage : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa70	
	Vector m_vEndPos; // 0xa7c	
	GameTime_t m_flStartEmitTime; // 0xa88	
	GameTime_t m_flEndEmitTime; // 0xa8c	
	int32_t m_nTouchCount; // 0xa90	
};

