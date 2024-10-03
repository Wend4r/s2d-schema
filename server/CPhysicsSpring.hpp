#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPhysicsSpring : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	float m_flFrequency; // 0x4e8	
	float m_flDampingRatio; // 0x4ec	
	float m_flRestLength; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_nameAttachStart; // 0x4f8	
	CUtlSymbolLarge m_nameAttachEnd; // 0x500	
	Vector m_start; // 0x508	
	Vector m_end; // 0x514	
	uint32_t m_teleportTick; // 0x520	
	
	// Datamap fields:
	// void m_pSpringJoint; // 0x4e0
	// float InputSetFrequency; // 0x0
	// float InputSetDampingRatio; // 0x0
	// float InputSetRestLength; // 0x0
};

