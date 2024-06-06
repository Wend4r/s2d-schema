#pragma once

#include <cstdint>

struct GameTime_t;
struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xee8
// Has VTable
// 
// MNetworkVarNames "bool m_bStartedArming"
// MNetworkVarNames "GameTime_t m_fArmedTime"
// MNetworkVarNames "bool m_bBombPlacedAnimation"
// MNetworkVarNames "bool m_bIsPlantingViaUse"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
class CC4 : public CCSWeaponBase
{
public:
	Vector m_vecLastValidPlayerHeldPosition; // 0xe98	
	Vector m_vecLastValidDroppedPosition; // 0xea4	
	bool m_bDoValidDroppedPositionCheck; // 0xeb0	
	// MNetworkEnable
	bool m_bStartedArming; // 0xeb1	
private:
	[[maybe_unused]] uint8_t __pad0eb2[0x2]; // 0xeb2
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0xeb4	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0xeb8	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0xeb9	
private:
	[[maybe_unused]] uint8_t __pad0eba[0x6]; // 0xeba
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xec0	
	int32_t m_nSpotRules; // 0xed8	
	bool m_bPlayedArmingBeeps[7]; // 0xedc	
	bool m_bBombPlanted; // 0xee3	
};

