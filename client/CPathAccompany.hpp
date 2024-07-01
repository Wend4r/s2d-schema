#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class CPathAccompany : public C_BaseEntity
{
public:
	CUtlVector< PathAccompanyNode_t > m_vecNodes; // 0x538	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
};

