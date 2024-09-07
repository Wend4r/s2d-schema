#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct UnreachableTarget_t
{
public:
	UnreachableTargetType_t nTargetType; // 0x0	
	CHandle< CBaseEntity > hTargetEnt; // 0x4	
	Vector vecTargetWorldPos; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CGlobalSymbol sTargetSymbol; // 0x18	
	GameTime_t fExpireTime; // 0x20	
	Vector vecTargetLocationWhenUnreachable; // 0x24	
};

