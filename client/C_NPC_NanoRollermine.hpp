#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1400
// Has VTable
// 
// MNetworkVarNames "float m_flForwardSpeed"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
class C_NPC_NanoRollermine : public C_AI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad13e0[0x18]; // 0x13e0
public:
	// MNetworkEnable
	float m_flForwardSpeed; // 0x13f8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwnerPawn; // 0x13fc	
};

