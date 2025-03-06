#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea0
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x1f8]; // 0xc50
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xe48	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xe60	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xe78	
private:
	[[maybe_unused]] uint8_t __pad0e79[0x3]; // 0xe79
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xe7c	
	Vector m_vLastPos; // 0xe80	
	float m_flDebuffDuration; // 0xe8c	
	GameTime_t m_flChannelTimeStarted; // 0xe90	
	bool m_bWasLatchedWhenCast; // 0xe94	
private:
	[[maybe_unused]] uint8_t __pad0e95[0x3]; // 0xe95
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xe98	
};

