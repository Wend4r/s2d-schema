#pragma once

#include <cstdint>

struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
struct thinkfunc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hFn; // 0x8	
	CUtlStringToken m_nContext; // 0x10	
	GameTick_t m_nNextThinkTick; // 0x14	
	GameTick_t m_nLastThinkTick; // 0x18	
	
	// Datamap fields:
	// void m_think; // 0x0
};

