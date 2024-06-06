#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPathMover : public CBaseEntity
{
public:
	CUtlVector< CHandle< CMoverPathNode > > m_vecPathNodes; // 0x4c0	
	float m_flPathLength; // 0x4d8	
	bool m_bClosedLoop; // 0x4dc	
};

