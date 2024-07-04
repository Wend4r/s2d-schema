#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
// MNetworkVarNames "CHandle< CBaseModelEntity> m_hHat"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "bool m_bLaunched"
class CCitadel_Ability_HatTrick : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x8]; // 0xaa8
public:
	// MNetworkEnable
	CHandle< CCitadelProjectile > m_hProjectile; // 0xab0	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_hHat; // 0xab4	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xab8	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xabc	
	// MNetworkEnable
	bool m_bLaunched; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ac1[0x3]; // 0xac1
public:
	GameTime_t m_flCastTime; // 0xac4	
	bool m_bNeedsExplosion; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ac9[0x3]; // 0xac9
public:
	QAngle m_angCasterAnglesAtCastTime; // 0xacc	
	bool m_bInKillFlow; // 0xad8	
};

