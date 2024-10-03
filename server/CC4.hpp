#pragma once

#include <cstdint>

struct GameTime_t;
struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf90
// Has VTable
// 
// MNetworkVarNames "bool m_bStartedArming"
// MNetworkVarNames "GameTime_t m_fArmedTime"
// MNetworkVarNames "bool m_bBombPlacedAnimation"
// MNetworkVarNames "bool m_bIsPlantingViaUse"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
class CC4 : public CCSWeaponBase
{
private:
	[[maybe_unused]] uint8_t __pad0f10[0x30]; // 0xf10
public:
	Vector m_vecLastValidPlayerHeldPosition; // 0xf40	
	Vector m_vecLastValidDroppedPosition; // 0xf4c	
	bool m_bDoValidDroppedPositionCheck; // 0xf58	
	// MNetworkEnable
	bool m_bStartedArming; // 0xf59	
private:
	[[maybe_unused]] uint8_t __pad0f5a[0x2]; // 0xf5a
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0xf5c	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0xf60	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0xf61	
private:
	[[maybe_unused]] uint8_t __pad0f62[0x6]; // 0xf62
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xf68	
	int32_t m_nSpotRules; // 0xf80	
	bool m_bPlayedArmingBeeps[7]; // 0xf84	
	bool m_bBombPlanted; // 0xf8b	
};

