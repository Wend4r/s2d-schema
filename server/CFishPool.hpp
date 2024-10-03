#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CFishPool : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x10]; // 0x4e0
public:
	int32_t m_fishCount; // 0x4f0	
	float m_maxRange; // 0x4f4	
	float m_swimDepth; // 0x4f8	
	float m_waterLevel; // 0x4fc	
	bool m_isDormant; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x7]; // 0x501
public:
	CUtlVector< CHandle< CFish > > m_fishes; // 0x508	
	CountdownTimer m_visTimer; // 0x520	
	
	// Datamap fields:
	// void CFishPoolUpdate; // 0x0
	// float max_range; // 0x7fffffff
};

