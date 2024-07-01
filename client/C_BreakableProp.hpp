#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf8
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
	// -> m_flDmgModBullet - 0xac0
	// -> m_flDmgModClub - 0xac4
	// -> m_flDmgModExplosive - 0xac8
	// -> m_flDmgModFire - 0xacc
	// -> m_iszPhysicsDamageTableName - 0xad0
	// -> m_iszBasePropData - 0xad8
	// -> m_nInteractions - 0xae0
	// -> m_bSpawnMotionDisabled - 0xae4
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xae8
	// -> m_nMotionDisabledSpawnFlag - 0xaec
	CPropDataComponent m_CPropDataComponent; // 0xab0	
	CEntityIOOutput m_OnBreak; // 0xaf0	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xb18	
	CEntityIOOutput m_OnTakeDamage; // 0xb40	
	float m_impactEnergyScale; // 0xb68	
	int32_t m_iMinHealthDmg; // 0xb6c	
	float m_flPressureDelay; // 0xb70	
	float m_flDefBurstScale; // 0xb74	
	Vector m_vDefBurstOffset; // 0xb78	
	CHandle< C_BaseEntity > m_hBreaker; // 0xb84	
	PerformanceMode_t m_PerformanceMode; // 0xb88	
	GameTime_t m_flPreventDamageBeforeTime; // 0xb8c	
	BreakableContentsType_t m_BreakableContentsType; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x4]; // 0xb94
public:
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xb98	
	CUtlString m_strBreakableContentsParticleOverride; // 0xba0	
	bool m_bHasBreakPiecesOrCommands; // 0xba8	
private:
	[[maybe_unused]] uint8_t __pad0ba9[0x3]; // 0xba9
public:
	float m_explodeDamage; // 0xbac	
	float m_explodeRadius; // 0xbb0	
private:
	[[maybe_unused]] uint8_t __pad0bb4[0x4]; // 0xbb4
public:
	float m_explosionDelay; // 0xbb8	
private:
	[[maybe_unused]] uint8_t __pad0bbc[0x4]; // 0xbbc
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xbc0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xbc8	
	CUtlSymbolLarge m_explosionCustomSound; // 0xbd0	
	CUtlSymbolLarge m_explosionModifier; // 0xbd8	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xbe0	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xbe4	
	float m_flDefaultFadeScale; // 0xbe8	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0xbec	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0xbf0	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xbf4	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xbb4
};

