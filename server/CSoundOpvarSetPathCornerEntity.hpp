#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b0
// Has VTable
class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0688[0x18]; // 0x688
public:
	float m_flDistMinSqr; // 0x6a0	
	float m_flDistMaxSqr; // 0x6a4	
	CUtlSymbolLarge m_iszPathCornerEntityName; // 0x6a8	
	
	// Datamap fields:
	// void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
};

