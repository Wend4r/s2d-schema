#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CFishPool : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x10]; // 0x4c0
public:
	int32_t m_fishCount; // 0x4d0	
	float m_maxRange; // 0x4d4	
	float m_swimDepth; // 0x4d8	
	float m_waterLevel; // 0x4dc	
	bool m_isDormant; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CUtlVector< CHandle< CFish > > m_fishes; // 0x4e8	
	CountdownTimer m_visTimer; // 0x500	
	
	// Datamap fields:
	// void CFishPoolUpdate; // 0x0
	// float max_range; // 0x7fffffff
};

