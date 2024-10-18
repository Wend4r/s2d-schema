#pragma once

#include <cstdint>

struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa0
// Has VTable
class CItemDefuser : public CItem
{
public:
	EntitySpottedState_t m_entitySpottedState; // 0xa80	
	int32_t m_nSpotRules; // 0xa98	
	
	// Datamap fields:
	// void CItemDefuserActivateThink; // 0x0
	// void CItemDefuserDefuserTouch; // 0x0
};

