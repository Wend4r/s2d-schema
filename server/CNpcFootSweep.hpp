#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
// Has VTable
class CNpcFootSweep : public CBaseTrigger
{
public:
	CUtlVector< FootSweepPusher_t > m_vecPushers; // 0x938	
	bool m_bUseCenterPusher; // 0x950	
	bool m_bUseForwardPusher; // 0x951	
};

