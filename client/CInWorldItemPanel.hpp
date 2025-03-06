#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
class CInWorldItemPanel : public C_PointClientUIWorldPanel
{
public:
	CHandle< C_BaseEntity > m_hTrackedEntity; // 0xa70	
	int32_t m_nTrackedEntity; // 0xa74	
};

