#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
// MNetworkVarNames "CHandle< CBaseModelEntity> m_hHat"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "bool m_bLaunched"
class CCitadel_Ability_HatTrick : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	// MNetworkEnable
	CHandle< C_CitadelProjectile > m_hProjectile; // 0xc30	
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hHat; // 0xc34	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc38	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc3c	
	// MNetworkEnable
	bool m_bLaunched; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c41[0x3]; // 0xc41
public:
	GameTime_t m_flCastTime; // 0xc44	
	bool m_bNeedsExplosion; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c49[0x3]; // 0xc49
public:
	QAngle m_angCasterAnglesAtCastTime; // 0xc4c	
	bool m_bInKillFlow; // 0xc58	
};

