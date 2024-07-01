#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CInfoTeamSpawn : public CServerOnlyPointEntity
{
public:
	bool m_bIntroSpawn; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	int32_t m_iLaneNum; // 0x4bc	
	CHandle< CBaseEntity > m_hAssignedPlayer; // 0x4c0	
};

