#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x180
// Has VTable
class CCitadelRegenComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	GameTime_t m_flLastRegenThinkTime; // 0x10	
	float m_flRegenAccumulator; // 0x14	
};

