#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x820
// Has VTable
class CFire : public CBaseModelEntity
{
public:
	CHandle< CBaseFire > m_hEffect; // 0x790	
	CHandle< CBaseEntity > m_hOwner; // 0x794	
	int32_t m_nFireType; // 0x798	
	float m_flFuel; // 0x79c	
	GameTime_t m_flDamageTime; // 0x7a0	
	GameTime_t m_lastDamage; // 0x7a4	
	float m_flFireSize; // 0x7a8	
	GameTime_t m_flLastNavUpdateTime; // 0x7ac	
	float m_flHeatLevel; // 0x7b0	
	float m_flHeatAbsorb; // 0x7b4	
	float m_flDamageScale; // 0x7b8	
	float m_flMaxHeat; // 0x7bc	
	float m_flLastHeatLevel; // 0x7c0	
	float m_flAttackTime; // 0x7c4	
	bool m_bEnabled; // 0x7c8	
	bool m_bStartDisabled; // 0x7c9	
	bool m_bDidActivate; // 0x7ca	
private:
	[[maybe_unused]] uint8_t __pad07cb[0x5]; // 0x7cb
public:
	CEntityIOOutput m_OnIgnited; // 0x7d0	
	CEntityIOOutput m_OnExtinguished; // 0x7f8	
	
	// Datamap fields:
	// void CFireBurnThink; // 0x0
	// void CFireGoOutThink; // 0x0
	// void InputStartFire; // 0x0
	// float InputExtinguish; // 0x0
	// float InputExtinguishTemporary; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

