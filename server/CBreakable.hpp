#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
class CBreakable : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0790[0x8]; // 0x790
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x798	
	Materials m_Material; // 0x7d8	
	CHandle< CBaseEntity > m_hBreaker; // 0x7dc	
	Explosions m_Explosion; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_iszSpawnObject; // 0x7e8	
	float m_flPressureDelay; // 0x7f0	
	int32_t m_iMinHealthDmg; // 0x7f4	
	CUtlSymbolLarge m_iszPropData; // 0x7f8	
	float m_impactEnergyScale; // 0x800	
	EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x804	
	CEntityIOOutput m_OnBreak; // 0x808	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x830	
	PerformanceMode_t m_PerformanceMode; // 0x858	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x85c	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x860	
	
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

