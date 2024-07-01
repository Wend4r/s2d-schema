#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CInfoHeroTestingPoint : public CPointEntity
{
public:
	int32_t m_ePointType; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_sMoveTarget; // 0x4c0	
};

