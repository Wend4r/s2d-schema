#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CSkyboxReference : public CBaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x4e0	
	CHandle< CSkyCamera > m_hSkyCamera; // 0x4e4	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

