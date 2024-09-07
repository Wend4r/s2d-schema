#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CInfoTeamSpawn : public CServerOnlyPointEntity
{
public:
	bool m_bIntroSpawn; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	int32_t m_iLaneNum; // 0x4dc	
	CHandle< CBaseEntity > m_hAssignedPlayer; // 0x4e0	
};

