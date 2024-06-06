#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x690
// Has VTable
class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0668[0x18]; // 0x668
public:
	float m_flDistMinSqr; // 0x680	
	float m_flDistMaxSqr; // 0x684	
	CUtlSymbolLarge m_iszPathCornerEntityName; // 0x688	
	
	// Datamap fields:
	// void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
};

