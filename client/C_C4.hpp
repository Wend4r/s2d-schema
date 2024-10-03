#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
struct EntitySpottedState_t;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1b60
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
	char m_szScreenText[32]; // 0x1b00	
	ParticleIndex_t m_activeLightParticleIndex; // 0x1b20	
	C4LightEffect_t m_eActiveLightEffect; // 0x1b24	
	// MNetworkEnable
	bool m_bStartedArming; // 0x1b28	
private:
	[[maybe_unused]] uint8_t __pad1b29[0x3]; // 0x1b29
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0x1b2c	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0x1b30	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0x1b31	
private:
	[[maybe_unused]] uint8_t __pad1b32[0x6]; // 0x1b32
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1b38	
	int32_t m_nSpotRules; // 0x1b50	
	bool m_bPlayedArmingBeeps[7]; // 0x1b54	
	bool m_bBombPlanted; // 0x1b5b	
};

