#pragma once

#include <cstdint>

struct ResponseFollowup;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
class ResponseParams
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int16_t odds; // 0x10	
	int16_t flags; // 0x12	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	ResponseFollowup* m_pFollowup; // 0x18	
	
	// Datamap fields:
	// int32_t delay; // 0x0
	// int32_t respeakdelay; // 0x4
};

