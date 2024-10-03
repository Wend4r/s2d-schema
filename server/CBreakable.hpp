#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
class CBreakable : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0750[0x8]; // 0x750
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x758	
	Materials m_Material; // 0x798	
	CHandle< CBaseEntity > m_hBreaker; // 0x79c	
	Explosions m_Explosion; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07a4[0x4]; // 0x7a4
public:
	CUtlSymbolLarge m_iszSpawnObject; // 0x7a8	
	float m_flPressureDelay; // 0x7b0	
	int32_t m_iMinHealthDmg; // 0x7b4	
	CUtlSymbolLarge m_iszPropData; // 0x7b8	
	float m_impactEnergyScale; // 0x7c0	
	EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x7c4	
	CEntityIOOutput m_OnBreak; // 0x7c8	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x7f0	
	PerformanceMode_t m_PerformanceMode; // 0x818	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x81c	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x820	
	
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
	// int64_t gamemass; // 0x7fffffff
	// float massScale; // 0x7fffffff
};

