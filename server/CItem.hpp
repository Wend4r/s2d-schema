#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb68
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a90[0x8]; // 0xa90
public:
	CEntityIOOutput m_OnPlayerTouch; // 0xa98	
	CEntityIOOutput m_OnPlayerPickup; // 0xac0	
	bool m_bActivateWhenAtRest; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0ae9[0x7]; // 0xae9
public:
	CEntityIOOutput m_OnCacheInteraction; // 0xaf0	
	CEntityIOOutput m_OnGlovePulled; // 0xb18	
	Vector m_vOriginalSpawnOrigin; // 0xb40	
	QAngle m_vOriginalSpawnAngles; // 0xb4c	
	bool m_bPhysStartAsleep; // 0xb58	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

