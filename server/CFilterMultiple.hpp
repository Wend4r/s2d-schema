#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x518	
	CHandle< CBaseEntity > m_hFilter[10]; // 0x568	
	int32_t m_nFilterCount; // 0x590	
};

