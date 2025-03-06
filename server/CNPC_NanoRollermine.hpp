#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1918
// Has VTable
// 
// MNetworkVarNames "float m_flForwardSpeed"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
class CNPC_NanoRollermine : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1890[0x38]; // 0x1890
public:
	// MNetworkEnable
	float m_flForwardSpeed; // 0x18c8	
private:
	[[maybe_unused]] uint8_t __pad18cc[0x44]; // 0x18cc
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOwnerPawn; // 0x1910	
};

