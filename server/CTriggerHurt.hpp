#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b8
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x918	
	float m_flDamage; // 0x91c	
	float m_flDamageCap; // 0x920	
	GameTime_t m_flLastDmgTime; // 0x924	
	float m_flForgivenessDelay; // 0x928	
	int32_t m_bitsDamageInflict; // 0x92c	
	int32_t m_damageModel; // 0x930	
	bool m_bNoDmgForce; // 0x934	
private:
	[[maybe_unused]] uint8_t __pad0935[0x3]; // 0x935
public:
	Vector m_vDamageForce; // 0x938	
	bool m_thinkAlways; // 0x944	
private:
	[[maybe_unused]] uint8_t __pad0945[0x3]; // 0x945
public:
	float m_hurtThinkPeriod; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad094c[0x4]; // 0x94c
public:
	CEntityIOOutput m_OnHurt; // 0x950	
	CEntityIOOutput m_OnHurtPlayer; // 0x978	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x9a0	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

