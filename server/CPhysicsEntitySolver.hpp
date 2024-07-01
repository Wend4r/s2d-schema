#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CPhysicsEntitySolver : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	CHandle< CBaseEntity > m_hMovingEntity; // 0x4c0	
	CHandle< CBaseEntity > m_hPhysicsBlocker; // 0x4c4	
	float m_separationDuration; // 0x4c8	
	GameTime_t m_cancelTime; // 0x4cc	
};

