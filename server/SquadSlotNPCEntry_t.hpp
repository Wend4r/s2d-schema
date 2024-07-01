#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc
// Has Trivial Destructor
struct SquadSlotNPCEntry_t
{
public:
	SquadSlotId_t nId; // 0x0	
	CHandle< CBaseEntity > hEnemy; // 0x4	
	bool bHoldForManualRelease; // 0x8	
};

