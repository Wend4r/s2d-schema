#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class CEntityFlame : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEntAttached; // 0x4c0	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	float m_flSize; // 0x4c8	
	bool m_bUseHitboxes; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04cd[0x3]; // 0x4cd
public:
	int32_t m_iNumHitboxFires; // 0x4d0	
	float m_flHitboxFireScale; // 0x4d4	
	GameTime_t m_flLifetime; // 0x4d8	
	CHandle< CBaseEntity > m_hAttacker; // 0x4dc	
	int32_t m_iDangerSound; // 0x4e0	
	float m_flDirectDamagePerSecond; // 0x4e4	
	int32_t m_iCustomDamageType; // 0x4e8	
	
	// Datamap fields:
	// void m_hPlayingSound; // 0x4ec
	// void CEntityFlameFlameThink; // 0x0
};

