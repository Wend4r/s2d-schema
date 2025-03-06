#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
class CPathAccompany : public C_BaseEntity
{
public:
	float m_flPathLength; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	CUtlVector< PathAccompanyNode_t > m_vecNodes; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0530[0x8]; // 0x530
public:
	float m_flAutoLeadRange; // 0x538	
	float m_flAutoBreakRange; // 0x53c	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
};

