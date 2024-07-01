#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CFishPool : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x10]; // 0x4b8
public:
	int32_t m_fishCount; // 0x4c8	
	float m_maxRange; // 0x4cc	
	float m_swimDepth; // 0x4d0	
	float m_waterLevel; // 0x4d4	
	bool m_isDormant; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
public:
	CUtlVector< CHandle< CFish > > m_fishes; // 0x4e0	
	CountdownTimer m_visTimer; // 0x4f8	
	
	// Datamap fields:
	// void CFishPoolUpdate; // 0x0
	// float max_range; // 0x7fffffff
};

