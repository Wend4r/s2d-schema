#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CFishPool : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x10]; // 0x4d8
public:
	int32_t m_fishCount; // 0x4e8	
	float m_maxRange; // 0x4ec	
	float m_swimDepth; // 0x4f0	
	float m_waterLevel; // 0x4f4	
	bool m_isDormant; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x7]; // 0x4f9
public:
	CUtlVector< CHandle< CFish > > m_fishes; // 0x500	
	CountdownTimer m_visTimer; // 0x518	
	
	// Datamap fields:
	// void CFishPoolUpdate; // 0x0
	// float max_range; // 0x7fffffff
};

