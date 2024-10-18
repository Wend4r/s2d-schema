#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfb8
// Has VTable
class C_PhysMagnet : public CBaseAnimGraph
{
public:
	CUtlVector< int32 > m_aAttachedObjectsFromServer; // 0xf88	
	CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // 0xfa0	
};

