#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class CEntityFlame : public CBaseEntity
{
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEntAttached; // 0x4d8	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	float m_flSize; // 0x4e0	
	bool m_bUseHitboxes; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	int32_t m_iNumHitboxFires; // 0x4e8	
	float m_flHitboxFireScale; // 0x4ec	
	GameTime_t m_flLifetime; // 0x4f0	
	CHandle< CBaseEntity > m_hAttacker; // 0x4f4	
	int32_t m_iDangerSound; // 0x4f8	
	float m_flDirectDamagePerSecond; // 0x4fc	
	int32_t m_iCustomDamageType; // 0x500	
	
	// Datamap fields:
	// void m_hPlayingSound; // 0x504
	// void CEntityFlameFlameThink; // 0x0
};

