#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x90
// Has VTable
class CPathQueryComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x18]; // 0x8
public:
	CTransform m_PathToEntityTransform; // 0x20	
	CUtlVector< Vector > m_vecPathSamplePositions; // 0x40	
	CUtlVector< float32 > m_vecPathSampleParameters; // 0x58	
	CUtlVector< float32 > m_vecPathSampleDistances; // 0x70	
};

