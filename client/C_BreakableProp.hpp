#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1040
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class C_BreakableProp : public CBaseProp
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	// -> m_flDmgModBullet - 0xf20
	// -> m_flDmgModClub - 0xf24
	// -> m_flDmgModExplosive - 0xf28
	// -> m_flDmgModFire - 0xf2c
	// -> m_iszPhysicsDamageTableName - 0xf30
	// -> m_iszBasePropData - 0xf38
	// -> m_nInteractions - 0xf40
	// -> m_bSpawnMotionDisabled - 0xf44
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xf48
	// -> m_nMotionDisabledSpawnFlag - 0xf4c
	CPropDataComponent m_CPropDataComponent; // 0xf10	
	CEntityIOOutput m_OnBreak; // 0xf50	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xf78	
	CEntityIOOutput m_OnTakeDamage; // 0xfa0	
	float m_impactEnergyScale; // 0xfc8	
	int32_t m_iMinHealthDmg; // 0xfcc	
	float m_flPressureDelay; // 0xfd0	
	float m_flDefBurstScale; // 0xfd4	
	Vector m_vDefBurstOffset; // 0xfd8	
	CHandle< C_BaseEntity > m_hBreaker; // 0xfe4	
	PerformanceMode_t m_PerformanceMode; // 0xfe8	
	GameTime_t m_flPreventDamageBeforeTime; // 0xfec	
	bool m_bHasBreakPiecesOrCommands; // 0xff0	
private:
	[[maybe_unused]] uint8_t __pad0ff1[0x3]; // 0xff1
public:
	float m_explodeDamage; // 0xff4	
	float m_explodeRadius; // 0xff8	
private:
	[[maybe_unused]] uint8_t __pad0ffc[0x4]; // 0xffc
public:
	float m_explosionDelay; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1004[0x4]; // 0x1004
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0x1008	
	CUtlSymbolLarge m_explosionCustomEffect; // 0x1010	
	CUtlSymbolLarge m_explosionCustomSound; // 0x1018	
	CUtlSymbolLarge m_explosionModifier; // 0x1020	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0x1028	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x102c	
	float m_flDefaultFadeScale; // 0x1030	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0x1034	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0x1038	
	// MNetworkEnable
	bool m_noGhostCollision; // 0x103c	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xffc
};

