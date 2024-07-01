#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x668
// Has VTable
class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0640[0x18]; // 0x640
public:
	float m_flDistMinSqr; // 0x658	
	float m_flDistMaxSqr; // 0x65c	
	CUtlSymbolLarge m_iszPathCornerEntityName; // 0x660	
	
	// Datamap fields:
	// void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
};

