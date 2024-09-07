#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
struct AIScheduleState_t
{
public:
	int32_t m_nCurTask; // 0x0	
	TaskStatus_t m_nTaskStatus; // 0x4	
	GameTime_t m_flTimeStarted; // 0x8	
	GameTime_t m_flTimeCurTaskStarted; // 0xc	
	int64_t m_taskFailureCode; // 0x10	
	int32_t m_nTaskInterrupt; // 0x18	
	bool m_bScheduleWasInterrupted; // 0x1c	
};

