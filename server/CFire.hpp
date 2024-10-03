#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e0
// Has VTable
class CFire : public CBaseModelEntity
{
public:
	CHandle< CBaseFire > m_hEffect; // 0x750	
	CHandle< CBaseEntity > m_hOwner; // 0x754	
	int32_t m_nFireType; // 0x758	
	float m_flFuel; // 0x75c	
	GameTime_t m_flDamageTime; // 0x760	
	GameTime_t m_lastDamage; // 0x764	
	float m_flFireSize; // 0x768	
	GameTime_t m_flLastNavUpdateTime; // 0x76c	
	float m_flHeatLevel; // 0x770	
	float m_flHeatAbsorb; // 0x774	
	float m_flDamageScale; // 0x778	
	float m_flMaxHeat; // 0x77c	
	float m_flLastHeatLevel; // 0x780	
	float m_flAttackTime; // 0x784	
	bool m_bEnabled; // 0x788	
	bool m_bStartDisabled; // 0x789	
	bool m_bDidActivate; // 0x78a	
private:
	[[maybe_unused]] uint8_t __pad078b[0x5]; // 0x78b
public:
	CEntityIOOutput m_OnIgnited; // 0x790	
	CEntityIOOutput m_OnExtinguished; // 0x7b8	
	
	// Datamap fields:
	// void CFireBurnThink; // 0x0
	// void CFireGoOutThink; // 0x0
	// void InputStartFire; // 0x0
	// float InputExtinguish; // 0x0
	// float InputExtinguishTemporary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

