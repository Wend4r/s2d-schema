#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x920	
	float m_flDamage; // 0x924	
	float m_flDamageCap; // 0x928	
	GameTime_t m_flLastDmgTime; // 0x92c	
	float m_flForgivenessDelay; // 0x930	
	DamageTypes_t m_bitsDamageInflict; // 0x934	
	int32_t m_damageModel; // 0x938	
	bool m_bNoDmgForce; // 0x93c	
private:
	[[maybe_unused]] uint8_t __pad093d[0x3]; // 0x93d
public:
	Vector m_vDamageForce; // 0x940	
	bool m_thinkAlways; // 0x94c	
private:
	[[maybe_unused]] uint8_t __pad094d[0x3]; // 0x94d
public:
	float m_hurtThinkPeriod; // 0x950	
private:
	[[maybe_unused]] uint8_t __pad0954[0x4]; // 0x954
public:
	CEntityIOOutput m_OnHurt; // 0x958	
	CEntityIOOutput m_OnHurtPlayer; // 0x980	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x9a8	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

