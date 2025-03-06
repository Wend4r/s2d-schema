#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
class C_BreakableProp : public CBaseProp
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	// -> m_flDmgModBullet - 0xb50
	// -> m_flDmgModClub - 0xb54
	// -> m_flDmgModExplosive - 0xb58
	// -> m_flDmgModFire - 0xb5c
	// -> m_iszPhysicsDamageTableName - 0xb60
	// -> m_iszBasePropData - 0xb68
	// -> m_nInteractions - 0xb70
	// -> m_bSpawnMotionDisabled - 0xb74
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xb78
	// -> m_nMotionDisabledSpawnFlag - 0xb7c
	CPropDataComponent m_CPropDataComponent; // 0xb40	
	CEntityIOOutput m_OnBreak; // 0xb80	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xba8	
	CEntityIOOutput m_OnTakeDamage; // 0xbd0	
	float m_impactEnergyScale; // 0xbf8	
	int32_t m_iMinHealthDmg; // 0xbfc	
	float m_flPressureDelay; // 0xc00	
	float m_flDefBurstScale; // 0xc04	
	Vector m_vDefBurstOffset; // 0xc08	
	CHandle< C_BaseEntity > m_hBreaker; // 0xc14	
	PerformanceMode_t m_PerformanceMode; // 0xc18	
	GameTime_t m_flPreventDamageBeforeTime; // 0xc1c	
	BreakableContentsType_t m_BreakableContentsType; // 0xc20	
private:
	[[maybe_unused]] uint8_t __pad0c24[0x4]; // 0xc24
public:
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xc28	
	CUtlString m_strBreakableContentsParticleOverride; // 0xc30	
	bool m_bHasBreakPiecesOrCommands; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c39[0x3]; // 0xc39
public:
	float m_explodeDamage; // 0xc3c	
	float m_explodeRadius; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c44[0x4]; // 0xc44
public:
	float m_explosionDelay; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c4c[0x4]; // 0xc4c
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xc50	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xc58	
	CUtlSymbolLarge m_explosionCustomSound; // 0xc60	
	CUtlSymbolLarge m_explosionModifier; // 0xc68	
	int32_t m_explosionDangerSound; // 0xc70	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xc74	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xc78	
	float m_flDefaultFadeScale; // 0xc7c	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0xc80	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xc44
};

