#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CNavSmartGoalHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc0]; // 0x0
public:
	bool m_bExecuteQueuedGoal; // 0xc0	
	
	// Datamap fields:
	// void m_pNPC; // 0x8
	// void m_pGoalAutoDoor; // 0x10
	// void m_pGoalPrimary; // 0x20
	// void m_pQueuedSmartGoal; // 0x30
};

