#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CPathSimple : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x50]; // 0x548
public:
	CUtlString m_pathString; // 0x598	
};

