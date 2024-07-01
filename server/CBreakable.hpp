#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
class CBreakable : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0748[0x8]; // 0x748
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x750	
	Materials m_Material; // 0x790	
	CHandle< CBaseEntity > m_hBreaker; // 0x794	
	Explosions m_Explosion; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad079c[0x4]; // 0x79c
public:
	CUtlSymbolLarge m_iszSpawnObject; // 0x7a0	
	float m_flPressureDelay; // 0x7a8	
	int32_t m_iMinHealthDmg; // 0x7ac	
	CUtlSymbolLarge m_iszPropData; // 0x7b0	
	float m_impactEnergyScale; // 0x7b8	
	EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x7bc	
	CEntityIOOutput m_OnBreak; // 0x7c0	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x7e8	
	PerformanceMode_t m_PerformanceMode; // 0x810	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x814	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x818	
	
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

