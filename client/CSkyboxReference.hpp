#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
class CSkyboxReference : public C_BaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x548	
	CHandle< C_SkyCamera > m_hSkyCamera; // 0x54c	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

