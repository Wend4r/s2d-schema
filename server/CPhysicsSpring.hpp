#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPhysicsSpring : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	float m_flFrequency; // 0x4c8	
	float m_flDampingRatio; // 0x4cc	
	float m_flRestLength; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_nameAttachStart; // 0x4d8	
	CUtlSymbolLarge m_nameAttachEnd; // 0x4e0	
	Vector m_start; // 0x4e8	
	Vector m_end; // 0x4f4	
	uint32_t m_teleportTick; // 0x500	
	
	// Datamap fields:
	// void m_pSpringJoint; // 0x4c0
	// float InputSetFrequency; // 0x0
	// float InputSetDampingRatio; // 0x0
	// float InputSetRestLength; // 0x0
};

