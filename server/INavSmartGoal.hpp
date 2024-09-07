#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
class INavSmartGoal
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CAI_BaseNPC > m_hNPC; // 0x8	
};

