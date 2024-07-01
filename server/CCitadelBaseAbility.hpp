#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// Is Abstract
// 
// MNetworkIncludeByName "m_flTimeScale"
// MNetworkExcludeByName "m_angRotation"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_cellX"
// MNetworkExcludeByName "m_cellY"
// MNetworkExcludeByName "m_cellZ"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkExcludeByName "m_flSimulationTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_nForceBone"
// MNetworkExcludeByName "m_nHitboxSet"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_vecForce"
// MNetworkExcludeByName "m_vecMaxs"
// MNetworkExcludeByName "m_vecMins"
// MNetworkExcludeByName "m_vecOrigin"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
// MNetworkExcludeByName "m_vLookTargetPosition"
// MNetworkExcludeByName "m_MoveCollide"
// MNetworkExcludeByName "m_MoveType"
// MNetworkExcludeByName "m_Gender"
// MNetworkExcludeByName "m_flElasticity"
// MNetworkExcludeByName "m_nMinCPULevel"
// MNetworkExcludeByName "m_nMinGPULevel"
// MNetworkExcludeByName "m_nMaxCPULevel"
// MNetworkExcludeByName "m_nMaxGPULevel"
// MNetworkExcludeByName "m_flNavIgnoreUntilTime"
// MNetworkExcludeByName "m_ubInterpolationFrame"
// MNetworkExcludeByName "m_flScale"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkUserGroupProxy "CCitadelBaseAbility"
// MNetworkUserGroupProxy "CCitadelBaseAbility"
// MNetworkOverride "m_flTimeScale"
// MNetworkVarNames "bool m_bChanneling"
// MNetworkVarNames "bool m_bInCastDelay"
// MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
// MNetworkVarNames "int m_nUpgradeBits"
// MNetworkVarNames "int m_iBucketID"
// MNetworkVarNames "bool m_bToggleState"
// MNetworkVarNames "GameTime_t m_flToggledTime"
// MNetworkVarNames "GameTime_t m_flCooldownStart"
// MNetworkVarNames "GameTime_t m_flCooldownEnd"
// MNetworkVarNames "GameTime_t m_flChannelStartTime"
// MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
// MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
// MNetworkVarNames "int m_iRemainingCharges"
// MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
// MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
// MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
// MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
// MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
// MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
class CCitadelBaseAbility : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0xd0]; // 0x4b8
public:
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x588	
	CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // 0x5a0	
	CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // 0x5b8	
	CGlobalSymbol m_strUsedCastGraphParam; // 0x5d0	
	int32_t m_nCastParamNeedsResetTick; // 0x5d8	
	bool m_bIsCoolingDownInternal; // 0x5dc	
private:
	[[maybe_unused]] uint8_t __pad05dd[0x1b]; // 0x5dd
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnChannelingChanged"
	bool m_bChanneling; // 0x5f8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInCastDelayChanged"
	bool m_bInCastDelay; // 0x5f9	
private:
	[[maybe_unused]] uint8_t __pad05fa[0x6]; // 0x5fa
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilityImbuedChanged"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecImbuedByAbilitiyIDs; // 0x600	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpgradeBitsChanged"
	// MNetworkPriority "32"
	int32_t m_nUpgradeBits; // 0x618	
	// MNetworkEnable
	int32_t m_iBucketID; // 0x61c	
	// MNetworkEnable
	bool m_bToggleState; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0621[0x3]; // 0x621
public:
	// MNetworkEnable
	GameTime_t m_flToggledTime; // 0x624	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownStart; // 0x628	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownEnd; // 0x62c	
	// MNetworkEnable
	GameTime_t m_flChannelStartTime; // 0x630	
	// MNetworkEnable
	GameTime_t m_flCastDelayStartTime; // 0x634	
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilitySlotChanged"
	EAbilitySlots_t m_eAbilitySlot; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad063a[0x2]; // 0x63a
public:
	GameTime_t m_flPostCastDelayEndTime; // 0x63c	
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_iRemainingCharges; // 0x640	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeStart; // 0x644	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeEnd; // 0x648	
	// MNetworkEnable
	GameTime_t m_flMovementControlActiveTime; // 0x64c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSelectedChangedTime; // 0x650	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAltCastHoldStartTime; // 0x654	
	// MNetworkEnable
	CUtlStringToken m_nImbuedAbilityID; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x4]; // 0x65c
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEnemyHeroesDamaged; // 0x660	
	
	// Datamap fields:
	// int32_t slot; // 0x7fffffff
	// int32_t bucket_id; // 0x7fffffff
	// float time_scale; // 0x7fffffff
};

