#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1110
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
	// -> m_flDmgModBullet - 0xfd8
	// -> m_flDmgModClub - 0xfdc
	// -> m_flDmgModExplosive - 0xfe0
	// -> m_flDmgModFire - 0xfe4
	// -> m_iszPhysicsDamageTableName - 0xfe8
	// -> m_iszBasePropData - 0xff0
	// -> m_nInteractions - 0xff8
	// -> m_bSpawnMotionDisabled - 0xffc
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0x1000
	// -> m_nMotionDisabledSpawnFlag - 0x1004
	CPropDataComponent m_CPropDataComponent; // 0xfc8	
	CEntityIOOutput m_OnBreak; // 0x1008	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x1030	
	CEntityIOOutput m_OnTakeDamage; // 0x1058	
	float m_impactEnergyScale; // 0x1080	
	int32_t m_iMinHealthDmg; // 0x1084	
	float m_flPressureDelay; // 0x1088	
	float m_flDefBurstScale; // 0x108c	
	Vector m_vDefBurstOffset; // 0x1090	
	CHandle< C_BaseEntity > m_hBreaker; // 0x109c	
	PerformanceMode_t m_PerformanceMode; // 0x10a0	
	GameTime_t m_flPreventDamageBeforeTime; // 0x10a4	
	BreakableContentsType_t m_BreakableContentsType; // 0x10a8	
private:
	[[maybe_unused]] uint8_t __pad10ac[0x4]; // 0x10ac
public:
	CUtlString m_strBreakableContentsPropGroupOverride; // 0x10b0	
	CUtlString m_strBreakableContentsParticleOverride; // 0x10b8	
	bool m_bHasBreakPiecesOrCommands; // 0x10c0	
private:
	[[maybe_unused]] uint8_t __pad10c1[0x3]; // 0x10c1
public:
	float m_explodeDamage; // 0x10c4	
	float m_explodeRadius; // 0x10c8	
private:
	[[maybe_unused]] uint8_t __pad10cc[0x4]; // 0x10cc
public:
	float m_explosionDelay; // 0x10d0	
private:
	[[maybe_unused]] uint8_t __pad10d4[0x4]; // 0x10d4
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0x10d8	
	CUtlSymbolLarge m_explosionCustomEffect; // 0x10e0	
	CUtlSymbolLarge m_explosionCustomSound; // 0x10e8	
	CUtlSymbolLarge m_explosionModifier; // 0x10f0	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0x10f8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x10fc	
	float m_flDefaultFadeScale; // 0x1100	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0x1104	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0x1108	
	// MNetworkEnable
	bool m_noGhostCollision; // 0x110c	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0x10cc
};

