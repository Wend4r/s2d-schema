#pragma once

#include <cstdint>

struct CPhysicsNPCSolver;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CPhysicsNPCSolver : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	CPhysicsNPCSolver* m_pNext; // 0x4c0	
	CHandle< CAI_BaseNPC > m_hNPC; // 0x4c8	
	CHandle< CBaseEntity > m_hEntity; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04d0[0x8]; // 0x4d0
public:
	float m_separationDuration; // 0x4d8	
	GameTime_t m_cancelTime; // 0x4dc	
	bool m_allowIntersection; // 0x4e0	
	
	// Datamap fields:
	// void m_pController; // 0x4d0
};

