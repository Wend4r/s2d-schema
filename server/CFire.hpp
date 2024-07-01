#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
class CFire : public CBaseModelEntity
{
public:
	CHandle< CBaseFire > m_hEffect; // 0x748	
	CHandle< CBaseEntity > m_hOwner; // 0x74c	
	int32_t m_nFireType; // 0x750	
	float m_flFuel; // 0x754	
	GameTime_t m_flDamageTime; // 0x758	
	GameTime_t m_lastDamage; // 0x75c	
	float m_flFireSize; // 0x760	
	GameTime_t m_flLastNavUpdateTime; // 0x764	
	float m_flHeatLevel; // 0x768	
	float m_flHeatAbsorb; // 0x76c	
	float m_flDamageScale; // 0x770	
	float m_flMaxHeat; // 0x774	
	float m_flLastHeatLevel; // 0x778	
	float m_flAttackTime; // 0x77c	
	bool m_bEnabled; // 0x780	
	bool m_bStartDisabled; // 0x781	
	bool m_bDidActivate; // 0x782	
private:
	[[maybe_unused]] uint8_t __pad0783[0x5]; // 0x783
public:
	CEntityIOOutput m_OnIgnited; // 0x788	
	CEntityIOOutput m_OnExtinguished; // 0x7b0	
	
	// Datamap fields:
	// void CFireBurnThink; // 0x0
	// void CFireGoOutThink; // 0x0
	// void InputStartFire; // 0x0
	// float InputExtinguish; // 0x0
	// float InputExtinguishTemporary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

