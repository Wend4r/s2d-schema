#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x520	
	CHandle< CBaseEntity > m_hFilter[10]; // 0x570	
	int32_t m_nFilterCount; // 0x598	
};

