#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa50
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x8]; // 0x978
public:
	CEntityIOOutput m_OnPlayerTouch; // 0x980	
	CEntityIOOutput m_OnPlayerPickup; // 0x9a8	
	bool m_bActivateWhenAtRest; // 0x9d0	
private:
	[[maybe_unused]] uint8_t __pad09d1[0x7]; // 0x9d1
public:
	CEntityIOOutput m_OnCacheInteraction; // 0x9d8	
	CEntityIOOutput m_OnGlovePulled; // 0xa00	
	Vector m_vOriginalSpawnOrigin; // 0xa28	
	QAngle m_vOriginalSpawnAngles; // 0xa34	
	bool m_bPhysStartAsleep; // 0xa40	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

