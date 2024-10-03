#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class SpawnPoint : public CServerOnlyPointEntity
{
public:
	int32_t m_iPriority; // 0x4e0	
	bool m_bEnabled; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	int32_t m_nType; // 0x4e8	
	
	// Datamap fields:
	// void InputSetEnabled; // 0x0
	// void InputSetDisabled; // 0x0
	// void InputToggleEnabled; // 0x0
};

