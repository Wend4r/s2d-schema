#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPathMover : public CBaseEntity
{
public:
	CUtlVector< CHandle< CMoverPathNode > > m_vecPathNodes; // 0x4b8	
	float m_flPathLength; // 0x4d0	
	bool m_bClosedLoop; // 0x4d4	
};

