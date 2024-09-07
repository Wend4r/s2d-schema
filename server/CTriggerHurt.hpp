#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d8
// Has VTable
class CTriggerHurt : public CBaseTrigger
{
public:
	float m_flOriginalDamage; // 0x938	
	float m_flDamage; // 0x93c	
	float m_flDamageCap; // 0x940	
	GameTime_t m_flLastDmgTime; // 0x944	
	float m_flForgivenessDelay; // 0x948	
	int32_t m_bitsDamageInflict; // 0x94c	
	int32_t m_damageModel; // 0x950	
	bool m_bNoDmgForce; // 0x954	
private:
	[[maybe_unused]] uint8_t __pad0955[0x3]; // 0x955
public:
	Vector m_vDamageForce; // 0x958	
	bool m_thinkAlways; // 0x964	
private:
	[[maybe_unused]] uint8_t __pad0965[0x3]; // 0x965
public:
	float m_hurtThinkPeriod; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad096c[0x4]; // 0x96c
public:
	CEntityIOOutput m_OnHurt; // 0x970	
	CEntityIOOutput m_OnHurtPlayer; // 0x998	
	CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x9c0	
	
	// Datamap fields:
	// void CTriggerHurtRadiationThink; // 0x0
	// void CTriggerHurtHurtThink; // 0x0
	// void CTriggerHurtNavThink; // 0x0
};

