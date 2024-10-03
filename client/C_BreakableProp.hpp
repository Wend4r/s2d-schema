#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1108
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
	// -> m_flDmgModBullet - 0xfd0
	// -> m_flDmgModClub - 0xfd4
	// -> m_flDmgModExplosive - 0xfd8
	// -> m_flDmgModFire - 0xfdc
	// -> m_iszPhysicsDamageTableName - 0xfe0
	// -> m_iszBasePropData - 0xfe8
	// -> m_nInteractions - 0xff0
	// -> m_bSpawnMotionDisabled - 0xff4
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xff8
	// -> m_nMotionDisabledSpawnFlag - 0xffc
	CPropDataComponent m_CPropDataComponent; // 0xfc0	
	CEntityIOOutput m_OnBreak; // 0x1000	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x1028	
	CEntityIOOutput m_OnTakeDamage; // 0x1050	
	float m_impactEnergyScale; // 0x1078	
	int32_t m_iMinHealthDmg; // 0x107c	
	float m_flPressureDelay; // 0x1080	
	float m_flDefBurstScale; // 0x1084	
	Vector m_vDefBurstOffset; // 0x1088	
	CHandle< C_BaseEntity > m_hBreaker; // 0x1094	
	PerformanceMode_t m_PerformanceMode; // 0x1098	
	GameTime_t m_flPreventDamageBeforeTime; // 0x109c	
	BreakableContentsType_t m_BreakableContentsType; // 0x10a0	
private:
	[[maybe_unused]] uint8_t __pad10a4[0x4]; // 0x10a4
public:
	CUtlString m_strBreakableContentsPropGroupOverride; // 0x10a8	
	CUtlString m_strBreakableContentsParticleOverride; // 0x10b0	
	bool m_bHasBreakPiecesOrCommands; // 0x10b8	
private:
	[[maybe_unused]] uint8_t __pad10b9[0x3]; // 0x10b9
public:
	float m_explodeDamage; // 0x10bc	
	float m_explodeRadius; // 0x10c0	
private:
	[[maybe_unused]] uint8_t __pad10c4[0x4]; // 0x10c4
public:
	float m_explosionDelay; // 0x10c8	
private:
	[[maybe_unused]] uint8_t __pad10cc[0x4]; // 0x10cc
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0x10d0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0x10d8	
	CUtlSymbolLarge m_explosionCustomSound; // 0x10e0	
	CUtlSymbolLarge m_explosionModifier; // 0x10e8	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0x10f0	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x10f4	
	float m_flDefaultFadeScale; // 0x10f8	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0x10fc	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0x1100	
	// MNetworkEnable
	bool m_noGhostCollision; // 0x1104	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0x10c4
};

