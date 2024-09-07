#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
struct locksound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge sLockedSound; // 0x8	
	CUtlSymbolLarge sUnlockedSound; // 0x10	
	GameTime_t flwaitSound; // 0x18	
};

