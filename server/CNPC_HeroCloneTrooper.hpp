#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18b8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hOwner"
class CNPC_HeroCloneTrooper : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1890[0x4]; // 0x1890
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOwner; // 0x1894	
};

