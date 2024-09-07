#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CInButtonState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint64_t m_pButtonStates[3]; // 0x8	
};

