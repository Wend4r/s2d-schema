#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb30
// Has VTable
class C_PhysMagnet : public CBaseAnimGraph
{
public:
	CUtlVector< int32 > m_aAttachedObjectsFromServer; // 0xb00	
	CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // 0xb18	
};

