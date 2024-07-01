#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class FilterHealth : public CBaseFilter
{
public:
	bool m_bAdrenalineActive; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	int32_t m_iHealthMin; // 0x514	
	int32_t m_iHealthMax; // 0x518	
};

