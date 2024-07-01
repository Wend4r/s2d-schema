#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x680
// Has VTable
class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity
{
public:
	CUtlVector< SoundOpvarTraceResult_t > m_traceResults; // 0x640	
private:
	[[maybe_unused]] uint8_t __pad0658[0x18]; // 0x658
public:
	float m_flSize; // 0x670	
	float m_flHeightTolerance; // 0x674	
	float m_flSizeSqr; // 0x678	
	
	// Datamap fields:
	// void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
};

