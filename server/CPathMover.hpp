#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPathMover : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	CUtlVector< CHandle< CMoverPathNode > > m_vecPathNodes; // 0x4e0	
	float m_flPathLength; // 0x4f8	
	bool m_bClosedLoop; // 0x4fc	
};

