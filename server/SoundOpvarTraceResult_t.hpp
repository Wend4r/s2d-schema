#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
struct SoundOpvarTraceResult_t
{
public:
	Vector vPos; // 0x0	
	bool bDidHit; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	float flDistSqrToCenter; // 0x10	
};

