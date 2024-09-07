#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector
{
private:
	[[maybe_unused]] uint8_t __pad0098[0x8]; // 0x98
public:
	Vector m_vStartPos; // 0xa0	
	float m_flSearchDist; // 0xac	
};

