#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Constructor
// Has Trivial Destructor
struct PathAccompanyNode_t
{
public:
	Vector m_vPosition; // 0x0	
	Vector m_vLeft; // 0xc	
	float m_flRadius; // 0x18	
	float m_flDistToNext; // 0x1c	
};

