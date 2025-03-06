#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x518
// Has VTable
class CSkyboxReference : public C_BaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x510	
	CHandle< C_SkyCamera > m_hSkyCamera; // 0x514	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

