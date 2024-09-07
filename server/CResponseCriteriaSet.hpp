#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
class CResponseCriteriaSet
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	int32_t m_nNumPrefixedContexts; // 0x20	
	bool m_bOverrideOnAppend; // 0x24	
};

