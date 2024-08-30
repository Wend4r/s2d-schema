#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a0
// Has VTable
class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity
{
public:
	CUtlVector< SoundOpvarTraceResult_t > m_traceResults; // 0x660	
	CUtlVector< AutoRoomDoorwayPairs_t > m_doorwayPairs; // 0x678	
	float m_flSize; // 0x690	
	float m_flHeightTolerance; // 0x694	
	float m_flSizeSqr; // 0x698	
	
	// Datamap fields:
	// void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
};

