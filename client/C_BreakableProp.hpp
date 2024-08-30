#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc18
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
	// -> m_flDmgModBullet - 0xae0
	// -> m_flDmgModClub - 0xae4
	// -> m_flDmgModExplosive - 0xae8
	// -> m_flDmgModFire - 0xaec
	// -> m_iszPhysicsDamageTableName - 0xaf0
	// -> m_iszBasePropData - 0xaf8
	// -> m_nInteractions - 0xb00
	// -> m_bSpawnMotionDisabled - 0xb04
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xb08
	// -> m_nMotionDisabledSpawnFlag - 0xb0c
	CPropDataComponent m_CPropDataComponent; // 0xad0	
	CEntityIOOutput m_OnBreak; // 0xb10	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xb38	
	CEntityIOOutput m_OnTakeDamage; // 0xb60	
	float m_impactEnergyScale; // 0xb88	
	int32_t m_iMinHealthDmg; // 0xb8c	
	float m_flPressureDelay; // 0xb90	
	float m_flDefBurstScale; // 0xb94	
	Vector m_vDefBurstOffset; // 0xb98	
	CHandle< C_BaseEntity > m_hBreaker; // 0xba4	
	PerformanceMode_t m_PerformanceMode; // 0xba8	
	GameTime_t m_flPreventDamageBeforeTime; // 0xbac	
	BreakableContentsType_t m_BreakableContentsType; // 0xbb0	
private:
	[[maybe_unused]] uint8_t __pad0bb4[0x4]; // 0xbb4
public:
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xbb8	
	CUtlString m_strBreakableContentsParticleOverride; // 0xbc0	
	bool m_bHasBreakPiecesOrCommands; // 0xbc8	
private:
	[[maybe_unused]] uint8_t __pad0bc9[0x3]; // 0xbc9
public:
	float m_explodeDamage; // 0xbcc	
	float m_explodeRadius; // 0xbd0	
private:
	[[maybe_unused]] uint8_t __pad0bd4[0x4]; // 0xbd4
public:
	float m_explosionDelay; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0bdc[0x4]; // 0xbdc
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xbe0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xbe8	
	CUtlSymbolLarge m_explosionCustomSound; // 0xbf0	
	CUtlSymbolLarge m_explosionModifier; // 0xbf8	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xc00	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xc04	
	float m_flDefaultFadeScale; // 0xc08	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0xc0c	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0xc10	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xc14	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xbd4
};

