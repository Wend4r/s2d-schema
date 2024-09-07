#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CInfoCoverPoint : public CServerOnlyPointEntity
{
public:
	int32_t m_nGroupID; // 0x4d8	
	int32_t m_nVisionRadius; // 0x4dc	
	bool m_bAllowOffNav; // 0x4e0	
};

