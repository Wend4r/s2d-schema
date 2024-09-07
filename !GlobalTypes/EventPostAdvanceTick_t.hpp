#pragma once

#include <cstdint>

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30	
	int32_t m_nCurrentTickThisFrame; // 0x34	
	int32_t m_nTotalTicksThisFrame; // 0x38	
	int32_t m_nTotalTicks; // 0x3c	
};

