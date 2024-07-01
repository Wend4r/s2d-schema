#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa30
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0958[0x8]; // 0x958
public:
	CEntityIOOutput m_OnPlayerTouch; // 0x960	
	CEntityIOOutput m_OnPlayerPickup; // 0x988	
	bool m_bActivateWhenAtRest; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x7]; // 0x9b1
public:
	CEntityIOOutput m_OnCacheInteraction; // 0x9b8	
	CEntityIOOutput m_OnGlovePulled; // 0x9e0	
	Vector m_vOriginalSpawnOrigin; // 0xa08	
	QAngle m_vOriginalSpawnAngles; // 0xa14	
	bool m_bPhysStartAsleep; // 0xa20	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

