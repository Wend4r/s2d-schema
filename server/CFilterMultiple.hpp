#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad053c[0x4]; // 0x53c
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x540	
	CHandle< CBaseEntity > m_hFilter[10]; // 0x590	
	int32_t m_nFilterCount; // 0x5b8	
};

