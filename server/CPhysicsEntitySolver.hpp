#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPhysicsEntitySolver : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x18]; // 0x4e0
public:
	CHandle< CBaseEntity > m_hMovingEntity; // 0x4f8	
	CHandle< CBaseEntity > m_hPhysicsBlocker; // 0x4fc	
	float m_separationDuration; // 0x500	
	GameTime_t m_cancelTime; // 0x504	
};

