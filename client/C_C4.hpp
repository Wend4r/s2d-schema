#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
struct EntitySpottedState_t;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1b70
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
	char m_szScreenText[32]; // 0x1b10	
	ParticleIndex_t m_activeLightParticleIndex; // 0x1b30	
	C4LightEffect_t m_eActiveLightEffect; // 0x1b34	
	// MNetworkEnable
	bool m_bStartedArming; // 0x1b38	
private:
	[[maybe_unused]] uint8_t __pad1b39[0x3]; // 0x1b39
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0x1b3c	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0x1b40	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0x1b41	
private:
	[[maybe_unused]] uint8_t __pad1b42[0x6]; // 0x1b42
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1b48	
	int32_t m_nSpotRules; // 0x1b60	
	bool m_bPlayedArmingBeeps[7]; // 0x1b64	
	bool m_bBombPlanted; // 0x1b6b	
};

