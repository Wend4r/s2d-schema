#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd50
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1f8]; // 0xb00
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xcf8	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xd10	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d29[0x3]; // 0xd29
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xd2c	
	Vector m_vLastPos; // 0xd30	
	float m_flDebuffDuration; // 0xd3c	
	GameTime_t m_flChannelTimeStarted; // 0xd40	
	bool m_bWasLatchedWhenCast; // 0xd44	
private:
	[[maybe_unused]] uint8_t __pad0d45[0x3]; // 0xd45
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xd48	
};

