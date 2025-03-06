#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
class FilterHealth : public CBaseFilter
{
public:
	bool m_bAdrenalineActive; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
public:
	int32_t m_iHealthMin; // 0x56c	
	int32_t m_iHealthMax; // 0x570	
};

