#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6c8
// Has VTable
class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity
{
public:
	CUtlVector< SoundOpvarTraceResult_t > m_traceResults; // 0x688	
	CUtlVector< AutoRoomDoorwayPairs_t > m_doorwayPairs; // 0x6a0	
	float m_flSize; // 0x6b8	
	float m_flHeightTolerance; // 0x6bc	
	float m_flSizeSqr; // 0x6c0	
	
	// Datamap fields:
	// void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
};

