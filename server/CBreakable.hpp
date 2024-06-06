#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
class CBreakable : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x8]; // 0x710
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x718	
	Materials m_Material; // 0x758	
	CHandle< CBaseEntity > m_hBreaker; // 0x75c	
	Explosions m_Explosion; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0764[0x4]; // 0x764
public:
	CUtlSymbolLarge m_iszSpawnObject; // 0x768	
	float m_flPressureDelay; // 0x770	
	int32_t m_iMinHealthDmg; // 0x774	
	CUtlSymbolLarge m_iszPropData; // 0x778	
	float m_impactEnergyScale; // 0x780	
	EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x784	
	CEntityIOOutput m_OnBreak; // 0x788	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x7b0	
	PerformanceMode_t m_PerformanceMode; // 0x7d8	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x7dc	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x7e0	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// float InputSetMass; // 0x0
	// void CBreakableDie; // 0x0
	// int32_t material; // 0x7fffffff
	// int32_t spawnobject; // 0x7fffffff
	// int32_t propdata; // 0x7fffffff
};

