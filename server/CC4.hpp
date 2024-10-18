#pragma once

#include <cstdint>

struct GameTime_t;
struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfd8
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
	[[maybe_unused]] uint8_t __pad0f58[0x30]; // 0xf58
public:
	Vector m_vecLastValidPlayerHeldPosition; // 0xf88	
	Vector m_vecLastValidDroppedPosition; // 0xf94	
	bool m_bDoValidDroppedPositionCheck; // 0xfa0	
	// MNetworkEnable
	bool m_bStartedArming; // 0xfa1	
private:
	[[maybe_unused]] uint8_t __pad0fa2[0x2]; // 0xfa2
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0xfa4	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0xfa8	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0xfa9	
private:
	[[maybe_unused]] uint8_t __pad0faa[0x6]; // 0xfaa
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xfb0	
	int32_t m_nSpotRules; // 0xfc8	
	bool m_bPlayedArmingBeeps[7]; // 0xfcc	
	bool m_bBombPlanted; // 0xfd3	
};

