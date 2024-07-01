#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
struct BulletID_t
{
public:
	ShotID_t m_ShotID; // 0x0	
	uint32_t m_nBulletIndex; // 0x4	
};

