#pragma once

#include <cstdint>

struct CAI_MoveMonitor;
struct AI_FreePassParams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
class CAI_FreePass : public CAI_Component
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0x40	
	float m_FreePassTimeRemaining; // 0x44	
	CAI_MoveMonitor m_FreePassMoveMonitor; // 0x48	
	AI_FreePassParams_t m_Params; // 0x58	
};

