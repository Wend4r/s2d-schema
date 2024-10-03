#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa38
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0960[0x8]; // 0x960
public:
	CEntityIOOutput m_OnPlayerTouch; // 0x968	
	CEntityIOOutput m_OnPlayerPickup; // 0x990	
	bool m_bActivateWhenAtRest; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09b9[0x7]; // 0x9b9
public:
	CEntityIOOutput m_OnCacheInteraction; // 0x9c0	
	CEntityIOOutput m_OnGlovePulled; // 0x9e8	
	Vector m_vOriginalSpawnOrigin; // 0xa10	
	QAngle m_vOriginalSpawnAngles; // 0xa1c	
	bool m_bPhysStartAsleep; // 0xa28	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

