#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0660[0x18]; // 0x660
public:
	float m_flDistMinSqr; // 0x678	
	float m_flDistMaxSqr; // 0x67c	
	CUtlSymbolLarge m_iszPathCornerEntityName; // 0x680	
	
	// Datamap fields:
	// void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
};

