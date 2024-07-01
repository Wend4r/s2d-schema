#pragma once

#include <cstdint>

struct NmSyncTrackTime_t;
// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct NmSyncTrackTimeRange_t
{
public:
	// -> m_nEventIdx - 0x0
	// -> m_percentageThrough - 0x4
	NmSyncTrackTime_t m_startTime; // 0x0	
	// -> m_nEventIdx - 0x8
	// -> m_percentageThrough - 0xc
	NmSyncTrackTime_t m_endTime; // 0x8	
};

