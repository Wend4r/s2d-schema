#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa00
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x960	
	float m_flDamage; // 0x964	
	float m_flDamageCap; // 0x968	
	GameTime_t m_flLastDmgTime; // 0x96c	
	float m_flForgivenessDelay; // 0x970	
	DamageTypes_t m_bitsDamageInflict; // 0x974	
	int32_t m_damageModel; // 0x978	
	bool m_bNoDmgForce; // 0x97c	
private:
	[[maybe_unused]] uint8_t __pad097d[0x3]; // 0x97d
public:
	Vector m_vDamageForce; // 0x980	
	bool m_thinkAlways; // 0x98c	
private:
	[[maybe_unused]] uint8_t __pad098d[0x3]; // 0x98d
public:
	float m_hurtThinkPeriod; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0994[0x4]; // 0x994
public:
	CEntityIOOutput m_OnHurt; // 0x998	
	CEntityIOOutput m_OnHurtPlayer; // 0x9c0	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x9e8	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

