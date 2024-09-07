#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
class CResponseQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x48]; // 0x0
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x48	
};

