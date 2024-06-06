#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
struct EntitySpottedState_t;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1ac0
// Has VTable
// 
// MNetworkVarNames "bool m_bStartedArming"
// MNetworkVarNames "GameTime_t m_fArmedTime"
// MNetworkVarNames "bool m_bBombPlacedAnimation"
// MNetworkVarNames "bool m_bIsPlantingViaUse"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
class C_C4 : public C_CSWeaponBase
{
public:
	char m_szScreenText[32]; // 0x1a60	
	ParticleIndex_t m_activeLightParticleIndex; // 0x1a80	
	C4LightEffect_t m_eActiveLightEffect; // 0x1a84	
	// MNetworkEnable
	bool m_bStartedArming; // 0x1a88	
private:
	[[maybe_unused]] uint8_t __pad1a89[0x3]; // 0x1a89
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0x1a8c	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0x1a90	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0x1a91	
private:
	[[maybe_unused]] uint8_t __pad1a92[0x6]; // 0x1a92
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1a98	
	int32_t m_nSpotRules; // 0x1ab0	
	bool m_bPlayedArmingBeeps[7]; // 0x1ab4	
	bool m_bBombPlanted; // 0x1abb	
};

