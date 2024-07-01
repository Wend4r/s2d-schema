#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CPhysicsSpring : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	float m_flFrequency; // 0x4c0	
	float m_flDampingRatio; // 0x4c4	
	float m_flRestLength; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CUtlSymbolLarge m_nameAttachStart; // 0x4d0	
	CUtlSymbolLarge m_nameAttachEnd; // 0x4d8	
	Vector m_start; // 0x4e0	
	Vector m_end; // 0x4ec	
	uint32_t m_teleportTick; // 0x4f8	
	
	// Datamap fields:
	// void m_pSpringJoint; // 0x4b8
	// float InputSetFrequency; // 0x0
	// float InputSetDampingRatio; // 0x0
	// float InputSetRestLength; // 0x0
};

