#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
struct AISquadSlotTargetInfo_t
{
public:
	CHandle< CBaseEntity > hTarget; // 0x0	
	CBitVec< 48 > slots; // 0x4	
	CBitVec< 48 > inactive_slots_by_mode; // 0xc	
};

