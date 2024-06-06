#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
class CFire : public CBaseModelEntity
{
public:
	CHandle< CBaseFire > m_hEffect; // 0x710	
	CHandle< CBaseEntity > m_hOwner; // 0x714	
	int32_t m_nFireType; // 0x718	
	float m_flFuel; // 0x71c	
	GameTime_t m_flDamageTime; // 0x720	
	GameTime_t m_lastDamage; // 0x724	
	float m_flFireSize; // 0x728	
	GameTime_t m_flLastNavUpdateTime; // 0x72c	
	float m_flHeatLevel; // 0x730	
	float m_flHeatAbsorb; // 0x734	
	float m_flDamageScale; // 0x738	
	float m_flMaxHeat; // 0x73c	
	float m_flLastHeatLevel; // 0x740	
	float m_flAttackTime; // 0x744	
	bool m_bEnabled; // 0x748	
	bool m_bStartDisabled; // 0x749	
	bool m_bDidActivate; // 0x74a	
private:
	[[maybe_unused]] uint8_t __pad074b[0x5]; // 0x74b
public:
	CEntityIOOutput m_OnIgnited; // 0x750	
	CEntityIOOutput m_OnExtinguished; // 0x778	
	
	// Datamap fields:
	// void CFireBurnThink; // 0x0
	// void CFireGoOutThink; // 0x0
	// void InputStartFire; // 0x0
	// float InputExtinguish; // 0x0
	// float InputExtinguishTemporary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

