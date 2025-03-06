#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e8
// Has VTable
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad056c[0x4]; // 0x56c
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x570	
	CHandle< C_BaseEntity > m_hFilter[10]; // 0x5c0	
};

