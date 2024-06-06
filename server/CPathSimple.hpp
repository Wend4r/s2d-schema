#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CPathSimple : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x50]; // 0x4c0
public:
	CUtlString m_pathString; // 0x510	
};

