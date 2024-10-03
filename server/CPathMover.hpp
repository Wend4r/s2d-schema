#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CPathMover : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlVector< CHandle< CMoverPathNode > > m_vecPathNodes; // 0x4e8	
	float m_flPathLength; // 0x500	
	bool m_bClosedLoop; // 0x504	
};

