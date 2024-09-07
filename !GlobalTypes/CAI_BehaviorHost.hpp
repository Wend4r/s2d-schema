#pragma once

#include <cstdint>

struct CAI_Behavior;
struct CAI_BaseNPC;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
class CAI_BehaviorHost
{
public:
	CAI_Behavior* m_pActiveBehavior; // 0x0	
	CAI_BaseNPC* m_pOuter; // 0x8	
	CUtlVector< CAI_Behavior* > m_Behaviors; // 0x10	
	bool m_bCalledBehaviorSelectSchedule; // 0x28	
};

