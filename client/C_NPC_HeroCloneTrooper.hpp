#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13e8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hOwner"
class C_NPC_HeroCloneTrooper : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwner; // 0x13e0	
};

