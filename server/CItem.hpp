#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad08e8[0x8]; // 0x8e8
public:
	CEntityIOOutput m_OnPlayerTouch; // 0x8f0	
	CEntityIOOutput m_OnPlayerPickup; // 0x918	
	bool m_bActivateWhenAtRest; // 0x940	
private:
	[[maybe_unused]] uint8_t __pad0941[0x7]; // 0x941
public:
	CEntityIOOutput m_OnCacheInteraction; // 0x948	
	CEntityIOOutput m_OnGlovePulled; // 0x970	
	Vector m_vOriginalSpawnOrigin; // 0x998	
	QAngle m_vOriginalSpawnAngles; // 0x9a4	
	bool m_bPhysStartAsleep; // 0x9b0	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

