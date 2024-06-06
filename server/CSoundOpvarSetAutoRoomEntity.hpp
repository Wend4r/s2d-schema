#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a8
// Has VTable
class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity
{
public:
	CUtlVector< SoundOpvarTraceResult_t > m_traceResults; // 0x668	
private:
	[[maybe_unused]] uint8_t __pad0680[0x18]; // 0x680
public:
	float m_flSize; // 0x698	
	float m_flHeightTolerance; // 0x69c	
	float m_flSizeSqr; // 0x6a0	
	
	// Datamap fields:
	// void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
};

