#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
class CSkyboxReference : public C_BaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x558	
	CHandle< C_SkyCamera > m_hSkyCamera; // 0x55c	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

