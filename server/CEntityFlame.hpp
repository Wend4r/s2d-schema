#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class CEntityFlame : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEntAttached; // 0x4e0	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	float m_flSize; // 0x4e8	
	bool m_bUseHitboxes; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	int32_t m_iNumHitboxFires; // 0x4f0	
	float m_flHitboxFireScale; // 0x4f4	
	GameTime_t m_flLifetime; // 0x4f8	
	CHandle< CBaseEntity > m_hAttacker; // 0x4fc	
	int32_t m_iDangerSound; // 0x500	
	float m_flDirectDamagePerSecond; // 0x504	
	int32_t m_iCustomDamageType; // 0x508	
	
	// Datamap fields:
	// void m_hPlayingSound; // 0x50c
	// void CEntityFlameFlameThink; // 0x0
};

