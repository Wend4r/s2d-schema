#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x8e0	
	float m_flDamage; // 0x8e4	
	float m_flDamageCap; // 0x8e8	
	GameTime_t m_flLastDmgTime; // 0x8ec	
	float m_flForgivenessDelay; // 0x8f0	
	int32_t m_bitsDamageInflict; // 0x8f4	
	int32_t m_damageModel; // 0x8f8	
	bool m_bNoDmgForce; // 0x8fc	
private:
	[[maybe_unused]] uint8_t __pad08fd[0x3]; // 0x8fd
public:
	Vector m_vDamageForce; // 0x900	
	bool m_thinkAlways; // 0x90c	
private:
	[[maybe_unused]] uint8_t __pad090d[0x3]; // 0x90d
public:
	float m_hurtThinkPeriod; // 0x910	
private:
	[[maybe_unused]] uint8_t __pad0914[0x4]; // 0x914
public:
	CEntityIOOutput m_OnHurt; // 0x918	
	CEntityIOOutput m_OnHurtPlayer; // 0x940	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x968	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

