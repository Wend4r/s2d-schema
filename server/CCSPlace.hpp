#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CCSPlace : public CServerOnlyModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x8]; // 0x710
public:
	CUtlSymbolLarge m_name; // 0x718	
};

