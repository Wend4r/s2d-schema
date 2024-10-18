#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// Is Abstract
class CAnimGraphControllerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CAnimGraphParamOptionalRef< char* > m_sDestructiblePartDestroyedHitGroup; // 0x18	
	CAnimGraphParamOptionalRef< int32 > m_nDestructiblePartDestroyedPartIndex; // 0x40	
};

