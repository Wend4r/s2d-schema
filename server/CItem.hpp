#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa80
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad09a8[0x8]; // 0x9a8
public:
	CEntityIOOutput m_OnPlayerTouch; // 0x9b0	
	CEntityIOOutput m_OnPlayerPickup; // 0x9d8	
	bool m_bActivateWhenAtRest; // 0xa00	
private:
	[[maybe_unused]] uint8_t __pad0a01[0x7]; // 0xa01
public:
	CEntityIOOutput m_OnCacheInteraction; // 0xa08	
	CEntityIOOutput m_OnGlovePulled; // 0xa30	
	Vector m_vOriginalSpawnOrigin; // 0xa58	
	QAngle m_vOriginalSpawnAngles; // 0xa64	
	bool m_bPhysStartAsleep; // 0xa70	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

