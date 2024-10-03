#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CPhysicsEntitySolver : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CHandle< CBaseEntity > m_hMovingEntity; // 0x4e8	
	CHandle< CBaseEntity > m_hPhysicsBlocker; // 0x4ec	
	float m_separationDuration; // 0x4f0	
	GameTime_t m_cancelTime; // 0x4f4	
};

