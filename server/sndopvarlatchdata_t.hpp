#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
struct sndopvarlatchdata_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge m_iszStack; // 0x8	
	CUtlSymbolLarge m_iszOperator; // 0x10	
	CUtlSymbolLarge m_iszOpvar; // 0x18	
	float m_flVal; // 0x20	
	Vector m_vPos; // 0x24	
};

