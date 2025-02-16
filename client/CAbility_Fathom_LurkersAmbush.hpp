#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0x1c4]; // 0xca4
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xe68	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xe80	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0e99[0x3]; // 0xe99
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xe9c	
	Vector m_vLastPos; // 0xea0	
	float m_flImmobilizeDuration; // 0xeac	
	GameTime_t m_flChannelTimeStarted; // 0xeb0	
};

