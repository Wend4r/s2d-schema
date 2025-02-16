#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x1c4]; // 0xb04
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xcc8	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xce0	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cf9[0x3]; // 0xcf9
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xcfc	
	Vector m_vLastPos; // 0xd00	
	float m_flImmobilizeDuration; // 0xd0c	
	GameTime_t m_flChannelTimeStarted; // 0xd10	
};

